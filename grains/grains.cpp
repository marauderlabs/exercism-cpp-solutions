#include "grains.h"

namespace grains {

    std::uint64_t square(std::uint8_t s) {
    if (s < 1 || s > 64) {
        throw std::domain_error("Invalid square");
    }
    return 1ULL << (s-1);
}

std::uint64_t total() {
    // since it's know that the squares are 64, set 1 in all the bits
    return ~0;
}

}  // namespace grains
