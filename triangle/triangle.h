#if !defined(TRIANGLE_H)
#define TRIANGLE_H
#include <cmath>

namespace triangle {
    enum class flavor { equilateral, isosceles, scalene };

    bool is_triangle(double a, double b, double c);
    flavor kind(double a, double b, double c);

}  // namespace triangle

#endif  // TRIANGLE_H
