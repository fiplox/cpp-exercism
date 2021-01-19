#include "prime_factors.h"

namespace prime_factors {
    std::vector<int> of(int n)
    {
        std::vector<int> prime_factors_of_n;
        for (int candidate = 2; candidate <= n; ++candidate) {
            if (n == 1)
                break;
            while (n % candidate == 0) {
                prime_factors_of_n.push_back(candidate);
                n /= candidate;
            }
        }
        return prime_factors_of_n;
    }
}  // namespace prime_factors
