#include <math.h>
import student2;
double RBPO::Lab2::Variant14::Task3::f2(double x)
{
	double res;
	x >= 2 ? res = ((1 + x * x) / sqrt(2 * x)) : res = (fabs(1 - sin(2 * x)));
	return res;
}