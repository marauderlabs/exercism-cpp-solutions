#include "triangle.h"

namespace triangle {

flavor kind(double a, double b, double c) {
    // negative side
    if ((a <= 0) || (b <= 0) || (c <= 0)) {
        throw std::domain_error("Invalid triangle");
    }

    // degenerate
    if (((a + b) < c) || ((a + c) < b) || ((b + c) < a)) {
        throw std::domain_error("Invalid triangle");
    }

    if ((a == b) && (b == c)) {
        return flavor::equilateral;
    }

    if ((a == b) || (b == c) || (a == c)) {
        return flavor::isosceles;
    }

    return flavor::scalene;
}

}  // namespace triangle
