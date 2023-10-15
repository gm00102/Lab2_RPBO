module;
#include <math.h>
export module student4;
namespace RBPO::Lab2::Variant7::Task5{

				export double f1(double x);
				export double f2(double x);
				export double a(int i);
				export double f3(int n);
				export double f4(double epsilon);
			}
module :private;
double RBPO::Lab2::Variant7::Task5::f1(double x)
{
	const double pi = 3.141592653589793;
	return((1 + cos(2 * (3 * pi / 8 - x / 4))) / 2) - ((1 + cos(2 * (11 * pi / 8 + x / 4))) / 2);
}
double RBPO::Lab2::Variant7::Task5::f2(double x)
{
	double res;
	x > 3 ? res = (1, 2 * x * x - 3 * x - 9) : res = (12 / (2 * x * x + 1));
	return res;
}
double RBPO::Lab2::Variant7::Task5::a(int i)
{
	return pow(-1, i % 2) * pow(2, i) / (pow(i, i + 1) + 1);
}
double RBPO::Lab2::Variant7::Task5::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant7::Task5::f4(double epsilon)
{
	double sum = 0.0, term = 0.0, curr = a(0);
	for (int i = 1; (fabs(curr - term) < epsilon); ++i) {
		sum += curr;
		term = curr;
		curr = a(i);
	}
	return sum;
}
