#include <math.h>
module student2;
double RBPO::Lab2::Variant7::Task3::f1(double x)
{
	const double pi = 3.141592653589793;
	return((1 + cos(2 * (3 * pi / 8 - x / 4))) / 2) - ((1 + cos(2 * (11 * pi / 8 + x / 4))) / 2);
}

