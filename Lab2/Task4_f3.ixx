module;
#include <math.h>
export module student3:f3;
import :a;
namespace RBPO::Lab2::Variant14::Task4
{
				export double f3(int n)
				{
					double sum = 0;
					for (int i = 0; i <= n; i++)
					{
						sum += a(i);
					}
					return sum;
				}
			}
