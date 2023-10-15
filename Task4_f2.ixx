module;
#include <math.h>
export module student3:f2;

namespace RBPO::Lab2::Variant7::Task4 {

				export double f2(double x)
				{
					double res;
					x > 3 ? res = (1, 2 * x * x - 3 * x - 9) : res = (12 / (2 * x * x + 1));
					return res;
				}
			}