#include <math.h>

import student1;
double RBPO::Lab2::Variant7::Task2::f1(double x)
{
	const double pi = 3.141592653589793;
	return((1 + cos(2 * (3 * pi / 8 - x / 4))) / 2) - ((1 + cos(2 * (11 * pi / 8 + x / 4))) / 2);
}
double RBPO::Lab2::Variant7::Task2::f2(double x)
{	
	if (x > 3)
	{
		return (1, 2 * x * x - 3 * x - 9);
	}
	else
	{
		return (12 / (2 * x * x + 1));
	}

}
double a(int i)
{
	return pow(-1, i % 2) * pow(2, i) / (pow(i, i + 1) + 1);
}
double RBPO::Lab2::Variant7::Task2::f3(int n)
{
	double sum = 0;
	int i = 0;
	while (i <= n)
	{
		sum += a(i);
		i++;
	}
	return sum;
}
double RBPO::Lab2::Variant7::Task2::f4(double epsilon)
{
	double sum = 0.0, term = 0.0, curr = a(0);
	int i = 1;
	while (fabs(curr - term) < epsilon) {
		sum += curr;
		term = curr;
		curr = a(i);
		i++;
	}
	return sum;;
}
