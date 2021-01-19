#include "triangle.h"

#include <stdexcept>
namespace triangle {
    bool is_triangle(double a, double b, double c)
    {
        if (a + b < c || b + c < a || c + a < b)
            return false;
        for (const auto& side : {a, b, c}) {
            if (side <= 0 || !std::isfinite(side))
                return false;
        }
        return true;
    }
    flavor kind(double a, double b, double c)
    {
        if (!is_triangle(a, b, c))
            throw std::domain_error("Not a triangle.");
        if (a == b && b == c)
            return flavor::equilateral;
        if (a == b || b == c || a == c)
            return flavor::isosceles;
        return flavor::scalene;
    }

}  // namespace triangle
