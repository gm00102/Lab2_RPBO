#include <math.h>

import student1;
double RBPO::Lab2::Variant14::Task2::f1(double x)
{
	return((cos(x) + sin(x)) / (cos(x) - sin(x)));
}
double RBPO::Lab2::Variant14::Task2::f2(double x)
{	
	if (x >= 2)
	{
		return ((1 + x * x) / sqrt(2 * x));
	}
	else
	{
		return (fabs(1 - sin(2 * x)));
	}

}			
double a(int i)
{
	return pow(-1, i % 2) * (i + 1) / (pow(i, 3) + 1);
}
double RBPO::Lab2::Variant14::Task2::f3(int n)
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
double RBPO::Lab2::Variant14::Task2::f4(double epsilon)
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
