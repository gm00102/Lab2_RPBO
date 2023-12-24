module;
#include <math.h>
export module student3:a;
namespace RBPO::Lab2::Variant14::Task4{
				double a(int i)
				{
					return pow(-1, i % 2) * (i + 1) / (pow(i, 3) + 1);
				}
			}
		