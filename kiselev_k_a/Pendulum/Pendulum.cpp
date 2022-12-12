#include <iostream>
#include<vec2D/vec2D.hpp>
#include<iomanip>
#include<fstream>
#include<vector>

struct State {
	Rdec2D r{ 0,0 };
	Rdec2D r_stable{ 0,0 };
	Rdec2D v{ 0,0 };
	Rdec2D a{ 0,0 };
	double m = 1;
	double k = 1;
	double u = 1.0;
	double dt = 0.0001;
	double g = 9.8;
};

State& GetModel(State& model) {
	std::cin >> model.r_stable.x >> model.r_stable.y >> model.r.x >> model.r.y >> model.m >> model.k >> model.u >> model.dt >> model.g;
	return model;
}

double ReverseDirection(double a) {
	return a <= 0 ? 1 : -1;
}

double SpringForce(const State& model) {
	return model.k * (model.r.x - model.r_stable.x) * (-1);
}

double FrictionForce(const State& model) {
	double force = 0;
	if (std::abs(model.v.x) < model.dt) force = std::min(model.u * model.m * model.g, std::abs(SpringForce(model)));
	else force = model.u * model.m * model.g;
	force *= ReverseDirection(model.v.x);
	return force;
}

State& Boost(State& model) {
	model.a.x = ((SpringForce(model) + FrictionForce(model)) / model.m);
	return model;
}

State& Speed( State& model, std::vector<Rdec2D>& pivot_point) {
	if (model.v.x * (model.v.x + model.a.x * model.dt) < 0)
		pivot_point.push_back(model.r);

	model.v.x += model.a.x * model.dt;
	return model;
}

void PrintState(const State& model, std::ostream& f, const long long& count) {
	f << count << " " << model.r << " " << model.r_stable <<
		" " << model.v << " " << model.a << " " <<
		SpringForce(model) << " " << FrictionForce(model) << "\n";
}

State& Simulation(State& model, std::ostream& f) {

	bool is_Stopped = false;
	double time = 0;
	long long count = 0;
	std::vector<Rdec2D> pivot_point;

	while (!is_Stopped) {
		Boost(model);
		model.r.x += (model.v.x * model.dt + model.a.x * model.dt * model.dt);
		Speed(model, pivot_point);


		time += model.dt;
		count += 1;

		PrintState(model, f, count);

		if (model.a.x==0 && model.v.x < 0.001) {
			is_Stopped = true;
		}
	}


	f << "Time to Stop: " << time << std::endl;
	f << "Point of Pivot\n";
	for (auto now : pivot_point) {
		f << now << "\n";
	}
	return model;
}



int main() {
	std::cout << std::fixed;
	std::cout << std::setprecision(3);

	std::ofstream f("output.txt");
	f << std::fixed;
	f<< std::setprecision(3);

	State start_model;

	//GetModel(model);
	start_model.r_stable = { 5,0 };
	start_model.r = { 10,0 };
	start_model.m = 1;
	start_model.k = 5;
	start_model.u = 0.2;
	start_model.dt = 0.01;
	start_model.g = 9.8;

	State model = start_model;

	f << "g      k      dt      m     u" << "\n" << model.g << " " << model.k << " " << model.dt << " " << model.m << " " << model.u << "\n"
		<< "\n N     Rx     Ry     R0x     R0y     Vx     Vy    Ax    Ay  SpringForce FrictionForce\n";

	Simulation(model, f);

	return 0;
}

