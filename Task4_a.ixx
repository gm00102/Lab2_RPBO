module;
#include <math.h>
export module student3:a;
namespace RBPO::Lab2::Variant7::Task4{
				double a(int i)
				{
					return pow(-1, i % 2) * pow(2, i) / (pow(i, i + 1) + 1);
				}
			}
		