#include "includes_test.h"
#include "Clock.hpp"

using namespace Timing;

TEST(Clock, FirstDeltaTime)
{
    Clock c;
    float time = c.getDeltaTime();
    
//    EXPECT_FLOAT_EQ(time, 0);
}

TEST(Clock, UpdateDeltaTime)
{
    float testTime = rand() % 100;
    Clock c;
    c.run();
    QTest::qSleep(testTime);


    for(unsigned int i = 0; i < 100; i++) {
        c.update();
        QTest::qSleep(testTime);
        float time1 = c.getDeltaTime();
        c.update();
        QTest::qSleep(testTime);
        float time2 = c.getDeltaTime();
    
        EXPECT_TRUE((time1 * 1.2) > ((time1 + time2) / 2));
    }
}
