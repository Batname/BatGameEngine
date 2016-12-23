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
    
    EXPECT_FLOAT_EQ(4, result1.x);
    EXPECT_FLOAT_EQ(6, result1.y);
    
    EXPECT_FLOAT_EQ(result1.x, result2.x);
    EXPECT_FLOAT_EQ(result2.y, result2.y);
}

TEST(Vector2D, ScalarMultiplication)
{
    Vector2D vec(-7, 3);
    Vector2D result1 = 8 * vec;
    Vector2D result2 = vec * 8;
    
    EXPECT_FLOAT_EQ(result1.x, -56);
    EXPECT_FLOAT_EQ(result1.y, 24);
    
    EXPECT_FLOAT_EQ(result1.x, result2.x);
    EXPECT_FLOAT_EQ(result1.y, result2.y);
}

TEST(Vector2D, CopyConstructor)
{
    Vector2D source(5, -12345.33);
    Vector2D copy(source);
    EXPECT_FLOAT_EQ(source.x, copy.x);
    EXPECT_FLOAT_EQ(source.y, copy.y);

}

TEST(Vector2D, AssigmentOperators)
{
    Vector2D source(5, 4);
    Vector2D another(1, -1);
    another = source;
    EXPECT_FLOAT_EQ(source.x, another.x);
    EXPECT_FLOAT_EQ(source.y, another.y);
}

TEST(Vector2D, AssigmentPlusEql)
{
    Vector2D source(5, 4);
    Vector2D another(1, -1);
    another += source;
    EXPECT_FLOAT_EQ(another.x, 1 + 5);
    EXPECT_FLOAT_EQ(another.y, -1 + 4);
}

TEST(Vector2D, AssigmentMinusEql)
{
    Vector2D source(5, 4);
    Vector2D another(1, -1);
    another -= source;
    EXPECT_FLOAT_EQ(another.x, 1 - 5);
    EXPECT_FLOAT_EQ(another.y, -1 - 4);
}
