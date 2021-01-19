#include "grains.h"

#include <limits>
#include <stdexcept>

namespace grains {
    unsigned long long square(unsigned int n)
    {
        if (n < 1 || n > 64) {
            throw std::range_error("Square must be between 1 and 64");
        }
        return 1ULL << (n - 1);
    }

    unsigned long long total()
    {
        return UINT64_MAX;
    }

}  // namespace grains
