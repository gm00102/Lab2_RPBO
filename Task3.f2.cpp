#include <math.h>
import student2;
double RBPO::Lab2::Variant7::Task3::f2(double x)
{
	double res;
	x > 3 ? res = (1, 2 * x * x - 3 * x - 9) : res = (12 / (2 * x * x + 1));
	return res;
}