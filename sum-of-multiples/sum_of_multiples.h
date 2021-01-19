#if !defined(SUM_OF_MULTIPLES_H)
#define SUM_OF_MULTIPLES_H
#include <vector>

namespace sum_of_multiples {
    bool is_multiple(std::vector<int> factors, int candidate);
    long long to(std::vector<int> factors, int limit);
}  // namespace sum_of_multiples

#endif  // SUM_OF_MULTIPLES_H
