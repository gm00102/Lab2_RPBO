#include <math.h>
module student2;

double RBPO::Lab2::Variant14::Task3::a(int i)
{
	return pow(-1, i % 2) * (i + 1) / (pow(i, 3) + 1);
}