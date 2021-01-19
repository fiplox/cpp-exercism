#include "gigasecond.h"

namespace gigasecond {
    const time_duration GSEC = seconds(1000000000);

    ptime advance(ptime time)
    {
        return time + GSEC;
    }

}  // namespace gigasecond
