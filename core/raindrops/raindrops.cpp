#include "raindrops.h"

namespace raindrops {
    std::string convert(int drop) {
        std::string result;
        if (drop % 3 == 0) {
            result += "Pling";
        }
        if (drop % 5 == 0) {
            result += "Plang";
        }
        if (drop % 7 == 0) {
            result += "Plong";
        }
        if (result.empty()) {
            result = std::to_string(drop);
        }
        return result;
    }
}  // namespace raindrops
