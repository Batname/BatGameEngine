#ifndef Header_h
#define Header_h

#include "includes_test.h"

inline bool closeEnough(float left, float right, float threshold = 0.00000001)
{
    return abs(left - right) < threshold;
}

#endif /* Header_h */
