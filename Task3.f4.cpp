#include <math.h>
module student2;

double RBPO::Lab2::Variant7::Task3::f4(double epsilon)
{
    double sum = 0.0, term = 0.0, curr = a(0);
    int i = 1;
    do {
        sum += curr;
        term = curr;
        curr = a(i);
        i++;
    } while (fabs(curr - term) < epsilon);
    return sum;
}