#include <iosfwd>
#include <limits>

const double kEps = std::numeric_limits<double>::epsilon() * 2;

struct Rdec2D {
	double x = 0.0;
	double y = 0.0;
};

struct Rpol2D {
	double z = 0.0;
	double phi = 0.0;
};

Rdec2D ToDec(const Rpol2D& v);
Rpol2D ToPol(const Rdec2D& v);


std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& v);
std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& v);

double Norm(const Rdec2D& v);
double Norm(const Rpol2D& v);

Rdec2D& operator+=(Rdec2D& lhs, const Rdec2D& rhs);
Rpol2D& operator+=(Rpol2D& lhs, const Rpol2D& rhs);

Rdec2D& operator-=(Rdec2D& lhs, const Rdec2D& rhs);
Rpol2D& operator-=(Rpol2D& lhs, const Rpol2D& rhs);

Rdec2D operator+ (const Rdec2D& lhs, const Rdec2D& rhs);
Rpol2D operator+(const Rpol2D& lhs, const Rpol2D& rhs);

Rdec2D operator- (const Rdec2D& lhs, const Rdec2D& rhs);
Rpol2D operator-(const Rpol2D& lhs, const Rpol2D& rhs);

Rdec2D operator*(const Rdec2D& v, double p);
Rpol2D operator*(const Rpol2D& v, double p);

Rdec2D operator/(const Rdec2D& v, double p);
Rpol2D operator/(const Rpol2D& v, double p);

bool operator==(const Rdec2D& lhs, const Rdec2D& rhs);
bool operator==(const Rpol2D& lhs, const Rpol2D& rhs);
bool operator==(const Rdec2D& lhs, const Rpol2D& rhs);
bool operator==(const Rpol2D& lhs, const Rdec2D& rhs);

bool operator!=(const Rdec2D& lhs, const Rdec2D& rhs);
bool operator!=(const Rpol2D& lhs, const Rpol2D& rhs);
bool operator!=(const Rdec2D& lhs, const Rpol2D& rhs);
bool operator!=(const Rpol2D& lhs, const Rdec2D& rhs);