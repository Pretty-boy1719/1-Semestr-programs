

#pragma once

//����� ���������. ������� ���������� �����������	
//������������� ��������, ����� ���������� ��������� �� ������ ����

#ifndef Rational_Rational_HPP_20231502 
#define Rational_Rational_HPP_20231502
#include<iostream>

class Rational {
public:
	Rational();
	explicit Rational(const int32_t intNumber);
	Rational(const int32_t num, const int32_t denom);
	Rational(const Rational& myRational);
	~Rational() = default;

	Rational& operator=(const Rational& rhs);
	Rational& operator+=(const Rational& rhs);
	Rational& operator-=(const Rational& rhs);
	Rational& operator*=(const Rational& rhs);
	Rational& operator/=(const Rational& rhs);

	Rational& operator++();
	Rational& operator--();
	Rational& operator++(int32_t);
	Rational& operator--(int32_t);

	std::ostream& Rational::writeTo(std::ostream& ostrm) const;
	std::istream& Rational::readFrom(std::istream& istrm);

	std::pair<int32_t, int32_t> get();

private:
	void norm();

private:
	int32_t num{ 0 };
	int32_t denom{ 1 };

	static const char separator{ '/' };
};

std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs);
std::istream& operator>>(std::istream& istrm, Rational& rhs);

int32_t gcd(int32_t a, int32_t b);

Rational operator+(Rational lhs, Rational rhs);
Rational operator-(Rational lhs, Rational rhs);
Rational operator*(Rational lhs, Rational rhs);
Rational operator/(Rational lhs, Rational rhs);

bool operator==(Rational lhs, Rational rhs);
bool operator>(Rational lhs, Rational rhs);
bool operator<(Rational lhs, Rational rhs);
bool operator>=(const Rational& lhs, const Rational& rhs);
bool operator <=(const Rational& lhs, const Rational& rhs);
bool operator!=(const Rational& lhs, const Rational& rhs);
#endif // !

