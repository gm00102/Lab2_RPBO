module;
#include <math.h>
export module student3:f4;
import :a;
namespace RBPO::Lab2::Variant7::Task4
{
				export double f4(double epsilon)
				{
					double sum = 0.0, term = 0.0, curr = a(0);
					for (int i = 1; (fabs(curr - term) < epsilon); ++i) {
						sum += curr;
						term = curr;
						curr = a(i);
					}
					return sum;
				}
}
		
