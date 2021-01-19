#include "raindrops.h"

namespace raindrops {
    std::string convert(int n)
    {
        std::string res;
        if (n % 3 == 0)
            res.append("Pling");
        if (n % 5 == 0)
            res.append("Plang");
        if (n % 7 == 0)
            res.append("Plong");
        return res.empty() ? std::to_string(n) : res;
    }
}  // namespace raindrops
