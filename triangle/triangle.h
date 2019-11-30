#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include <stdexcept>

namespace triangle {

    enum class flavor { equilateral, isosceles, scalene };

    // given sides of a triangle return the kind
    flavor kind(double s1, double s2, double s3);

}  // namespace triangle

#endif // TRIANGLE_H
