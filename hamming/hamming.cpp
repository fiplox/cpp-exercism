#include "hamming.h"

#include <stdexcept>

namespace hamming {
    int compute(std::string a, std::string b)
    {
        int distance{0};
        uint i;

        if (a.length() != b.length())
            throw std::domain_error("The length of two strands is not equal.");

        for (i = 0; i < a.length(); ++i) {
            if (a[i] != b[i])
                distance++;
        }

        return distance;
    }
}  // namespace hamming
