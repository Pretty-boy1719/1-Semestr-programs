#include<iostream>
#include<vec2D/vec2D.hpp>

void TestOp(
	const Rdec2D v_lhs,
	const Rdec2D v_rhs,
	const Rdec2D v_res,
	const std::string& op_str
);

int main() {

	Rdec2D v1{ 1.0,1.0 };
	Rdec2D v2{ 1.41,0.78 };

	TestOp(v1, v2, v1 + v2, "+");

	std::cout << "v1 == v2 -> " << (v1 == v2 ? 1 : 0) << std::endl;
	std::cout << "v2 == v2 -> " << (v2 == v2 ? 1 : 0) << std::endl;
	std::cout << "v2+kEps == v2 -> " << ((v2 + Rdec2D{ kEps }) == v2 ? 1 : 0) << std::endl;

	return 0;
}