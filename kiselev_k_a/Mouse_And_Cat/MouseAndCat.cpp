#include<iostream>
#include<vec2D/vec2D.hpp>

Rdec2D ChangePosition(const Rdec2D& start, const Rdec2D& direction, const double& time) {
	return start + direction * time;
}

Rdec2D StepToObject(const Rdec2D& start, const Rdec2D& end, double speed) {
	return ((end - start) / Norm(end - start)) * speed;
}

void ModulSpeedOfCat(const Rdec2D& r_mouse_original, const Rdec2D& r_cat_original, const Rdec2D& r_hole_original, const double& speed_mouse) {
	
	
	Rdec2D step_to_hole{ 0,0, };
	Rdec2D step_to_mouse{ 0,0 };
	Rdec2D r_mouse = r_mouse_original;
	Rdec2D r_cat = r_cat_original;
	Rdec2D r_hole = r_hole_original;

	double speed_cat = 0.001;
	double dt = 0.01;
	double pre_dist = 9999999;
	double now_dist_mouse_cat = 0;
	double way_mouse = 0;
	double way_cat = 0;

	bool isCaught = false;
	bool isEscape = false;

	for (double j = 0.5; j < 5.0; j += 0.001) {

		speed_cat = j;
		isEscape = false;
		isCaught = false;
		pre_dist = 9999999;
		r_mouse = r_mouse_original;
		r_cat = r_cat_original;
		r_hole = r_hole_original;
		way_mouse = 0;
		way_cat = 0;

		for (int i = 0; i < 1000; i += 1) {

			if (isCaught || isEscape)
				break;

			now_dist_mouse_cat = Norm(r_mouse - r_cat);

			step_to_hole = StepToObject(r_mouse, r_hole, speed_mouse);
			if (Norm(r_mouse - r_hole) > Norm(step_to_hole)*dt) {
				r_mouse = ChangePosition(r_mouse, step_to_hole, dt);
				way_mouse += Norm(step_to_hole) * dt;
			}
			else {
				r_mouse = r_hole;
				way_mouse += Norm(r_mouse - r_hole) * dt;
				isEscape = true;
			}

			step_to_mouse = StepToObject(r_cat, r_mouse, speed_cat);
			if (!isEscape && now_dist_mouse_cat > Norm(step_to_mouse)*dt) {
				r_cat = ChangePosition(r_cat, step_to_mouse, dt);
				way_cat += Norm(step_to_mouse) * dt;
			}
			else if (!isEscape) {
				isCaught = true;
				r_cat = r_mouse;
				way_cat += Norm(r_mouse - r_cat) * dt;
			}

			if (now_dist_mouse_cat > pre_dist)
				isEscape = true;

			pre_dist = now_dist_mouse_cat;
		}

		if (isEscape && now_dist_mouse_cat < Norm(step_to_mouse) * dt) {
			std::cout << "Almost Caught! Position of mouse: " << r_mouse << " Speed of cat: " << speed_cat << std::endl <<
				"Way mouse: " << way_mouse << std::endl << "Way cat: " << way_cat << std::endl <<
				"Relation way cat to mouse: " << way_cat / way_mouse << std::endl <<
				"Relation speed cat to mouse: " << speed_cat / speed_mouse;
			break;
		}
	}
}

int main() {

	Rdec2D r_mouse{ 0,0 };
	Rdec2D r_cat{ 5,5 };
	Rdec2D r_hole{ 0,5 };

	double speed_mouse = 1;

	ModulSpeedOfCat(r_mouse,r_cat,r_hole,speed_mouse);

	return 0;
}