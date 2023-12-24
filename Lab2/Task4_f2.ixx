module;
#include <math.h>
export module student3:f2;

namespace RBPO::Lab2::Variant14::Task4 {

				export double f2(double x)
				{
					double res;
					x >= 2 ? res = ((1 + x * x) / sqrt(2 * x)) : res = (fabs(1 - sin(2 * x)));
					return res;
				}
			}