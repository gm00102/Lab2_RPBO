module;
#include <math.h>
export module student4;
namespace RBPO::Lab2::Variant14::Task5{

				export double f1(double x);
				export double f2(double x);
				export double a(int i);
				export double f3(int n);
				export double f4(double epsilon);
			}
module :private;
double RBPO::Lab2::Variant14::Task5::f1(double x)
{
	return((cos(x) + sin(x)) / (cos(x) - sin(x)));
}
double RBPO::Lab2::Variant14::Task5::f2(double x)
{
	double res;
	x >= 2 ? res = ((1 + x * x) / sqrt(2 * x)) : res = (fabs(1 - sin(2 * x)));
	return res;
}
double RBPO::Lab2::Variant14::Task5::a(int i)
{
	return (pow(-1, i) * ((i + 1) / (pow(i, 3) + 1)));
}
double RBPO::Lab2::Variant14::Task5::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant14::Task5::f4(double epsilon)
{
	double sum = 0.0, term = 0.0, curr = a(0);
	for (int i = 1; (fabs(curr - term) < epsilon); ++i) {
		sum += curr;
		term = curr;
		curr = a(i);
	}
	return sum;
}
