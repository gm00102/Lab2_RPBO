module;
#include <math.h>
export module student;

namespace RBPO::Lab2::Variant7::Task1{
				export double f1(double x)
				{	
				const double pi = 3.141592653589793;
				return((1 + cos(2 * (3 * pi / 8 - x / 4))) / 2) - ((1 + cos(2 * (11 * pi / 8 + x / 4))) / 2);
					 
				}
				export double f2(double x)
				{
					double res;
					x > 3 ? res=(1, 2 * x * x - 3 * x - 9) : res= (12 / (2 * x * x + 1));
					return res;
				}
				export double a(int i)
				{
					return pow(-1, i % 2) * pow(2, i) / (pow(i,i+1)+1);
				}
				export double f3(int n)
				{
					double sum = 0;
					for (int i = 0; i <= n; i++)
					{
						sum += a(i);
					}
					return sum;
				}
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
		
	
