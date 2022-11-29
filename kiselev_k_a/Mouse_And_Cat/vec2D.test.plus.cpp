#include<vec2D/vec2D.hpp>
#include<iostream>

void TestOp(
	const Rdec2D v_lhs,
	const Rdec2D v_rhs,
	const Rdec2D v_res,
	const std::string& op_str
) {
	std::cout << v_lhs << op_str << v_rhs << "->" << v_res << std::endl;
}