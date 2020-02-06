#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(const std::string &str) {
        return std::string(std::rbegin(str), std::rend(str));
    }
}  // namespace reverse_string
