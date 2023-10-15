#include <math.h>
module student2;

double RBPO::Lab2::Variant7::Task3::a(int i)
{
	return pow(-1, i % 2) * pow(2, i) / (pow(i, i + 1) + 1);
}