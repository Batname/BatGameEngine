#include "includes_test.h"
#include "Clock.hpp"

using namespace Timing;

TEST(Clock, FirstDeltaTime)
{
    Clock c;
    float time = c.getDeltaTime();
    
    EXPECT_FLOAT_EQ(time, 0);
}

TEST(Clock, UpdateDeltaTime)
{
    float testTime = rand() % 100;
    Clock c;
    c.update();

    for(unsigned int i = 0; i < 100; i++) {
        QTest::qSleep(testTime);
        c.update();
        float time = c.getDeltaTime();
        EXPECT_TRUE(testTime + 3.0f > time && testTime - 3.0f < time);
    }
}
