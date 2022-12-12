#include<iostream>
#include<cmath>

#include"vec2D.hpp"


Rdec2D ToDec(const Rpol2D& v) {
	return{ v.z * cos(v.phi),v.z * sin(v.phi) };
}

Rpol2D ToPol(const Rdec2D& v) {
	return { sqrt(v.x * v.x + v.y * v.y), atan(v.y / v.x) };
}

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& v) {
	return ostrm << "( " << v.x << ", " << v.y << " )";

}std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& v) {
	return ostrm << "( " << v.z << ", " << v.phi << " )";
}

double Norm(const Rdec2D& v) {
	return sqrt(v.x * v.x + v.y * v.y);
}

double Norm(const Rpol2D& v) {
	return Norm(ToDec(v));
}

Rdec2D& operator+=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x += rhs.x;
	lhs.y += rhs.y;
	return lhs;
}

Rdec2D& operator-=(Rdec2D& lhs, const Rdec2D& rhs) {
	lhs.x -= rhs.x;
	lhs.y -= rhs.y;
	return lhs;
}

Rdec2D operator+(const Rdec2D& lhs, const Rdec2D& rhs) {
	Rdec2D res = lhs;
	res += rhs;
	return res;
}

Rdec2D operator-(const Rdec2D& lhs, const Rdec2D& rhs) {
	return { lhs.x - rhs.x, lhs.y - rhs.y };
}

Rdec2D operator*(const Rdec2D& v, double p) {
	return{ v.x * p,v.y * p };
}

Rdec2D operator/(const Rdec2D& v, double p) {
	return{ v.x / p,v.y / p };
}

Rpol2D& operator+=(Rpol2D& lhs, const Rpol2D& rhs) {
	Rdec2D vl = ToDec(lhs);
	Rdec2D vr = ToDec(rhs);
	
	vl += vr;
	lhs = ToPol(vl);
	return lhs;
}

Rpol2D& operator-=(Rpol2D& lhs, const Rpol2D& rhs) {
	Rdec2D vl = ToDec(lhs);
	Rdec2D vr = ToDec(rhs);

	vl -= vr;
	lhs = ToPol(vl);
	return lhs;
}

Rpol2D operator+(const Rpol2D& lhs, const Rpol2D& rhs) {
	Rpol2D res = lhs;
	res += rhs;
	return res;
}

Rpol2D operator-(const Rpol2D& lhs, const Rpol2D& rhs) {
	Rpol2D res = lhs;
	res -= rhs;
	return res;
}

Rpol2D operator*(const Rpol2D& v, double p) {
	return ToPol(ToDec(v) * p);
}

Rpol2D operator/(const Rpol2D& v, double p) {
	return ToPol(ToDec(v) / p);
}

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs) {
	const double eps = 1e-8;
	return (std::abs(lhs.x - rhs.x) < kEps) && (std::abs(lhs.y - rhs.y) < kEps);
}

bool operator==(const Rpol2D& lhs, const Rpol2D& rhs) {
	return ToDec(lhs) == ToDec(rhs);
}

bool operator==(const Rdec2D& lhs, const Rpol2D& rhs) {
	return lhs == ToDec(rhs);
}

bool operator==(const Rpol2D& lhs, const Rdec2D& rhs) {
	return ToDec(lhs) == rhs;
}

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs) {
	return !(lhs == rhs);
}

bool operator!=(const Rpol2D& lhs, const Rpol2D& rhs) {
	return !(lhs == rhs);
}

bool operator!=(const Rdec2D& lhs, const Rpol2D& rhs) {
	return !(lhs == rhs);
}

bool operator!=(const Rpol2D& lhs, const Rdec2D& rhs) {
	return !(lhs == rhs);
}