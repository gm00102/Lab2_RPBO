module;
#include <math.h>
export module student3:f1;

namespace RBPO::Lab2::Variant7::Task4 {

				export double f1(double x)
				{
					const double pi = 3.141592653589793;
					return((1 + cos(2 * (3 * pi / 8 - x / 4))) / 2) - ((1 + cos(2 * (11 * pi / 8 + x / 4))) / 2);
				
				}
			}
		
