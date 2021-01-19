#include "sum_of_multiples.h"

#include <numeric>
namespace sum_of_multiples {
    bool is_multiple(std::vector<int> factors, int candidate)
    {
        for (int n : factors) {
            if (n != 0 && candidate % n == 0)
                return true;
        }
        return false;
    }

    long long to(std::vector<int> factors, int limit)
    {
        std::vector<long long> result{};
        for (int i{0}; i < limit; ++i) {
            if (is_multiple(factors, i))
                result.push_back(i);
        }
        return std::accumulate(result.begin(), result.end(), 0);
    }

}  // namespace sum_of_multiples
