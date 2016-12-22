#include "includes_test.h"
#include "Vector2D.h"

using namespace Math;

TEST(Vector2D, Constructor)
{
    Vector2D first(1, 2);
    EXPECT_EQ(1, first.x);
    EXPECT_EQ(2, first.y);
}

TEST(Vector2D, VectorAddition)
{
    Vector2D first(1, 2);
    Vector2D second(3, 4);
    
    Vector2D result1 = first + second;
    Vector2D result2 = second + first;
    
    EXPECT_TRUE(result1.x == 4);
    EXPECT_TRUE(result1.y == 6);
    
    EXPECT_TRUE(result1.x == result2.x);
    EXPECT_TRUE(result2.y == result2.y);
}

TEST(Vector2D, ScalarMultiplication)
{

}
