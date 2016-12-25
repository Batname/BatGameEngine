#include "includes_test.h"
#include "Vector3D.h"

using namespace Math;

TEST(Vector3D, Vector3DConstructor)
{
    Vector3D first(1, -5.6f, 355.0f);
    EXPECT_FLOAT_EQ(1.0f, first.x);
    EXPECT_FLOAT_EQ(-5.6f, first.y);
    EXPECT_FLOAT_EQ(355.0f, first.z);
    
    Vector3D defaultConstructor;
    EXPECT_FLOAT_EQ(0.0f, defaultConstructor.x);
    EXPECT_FLOAT_EQ(0.0f, defaultConstructor.y);
    EXPECT_FLOAT_EQ(0.0f, defaultConstructor.z);
}

TEST(Vector3D, ScalarMultiplication)
{
    Vector3D vec(-7, 3, -4);
    Vector3D result1 = 8 * vec;
    Vector3D result2 = vec * 8;
    
    EXPECT_FLOAT_EQ(result1.x, -56);
    EXPECT_FLOAT_EQ(result1.y, 24);
    EXPECT_FLOAT_EQ(result1.z, -32);
    
    EXPECT_FLOAT_EQ(result1.x, result2.x);
    EXPECT_FLOAT_EQ(result1.y, result2.y);
    EXPECT_FLOAT_EQ(result1.z, result2.z);

}

TEST(Vector3D, AssigmentPlusEql)
{
    Vector3D source(5, 4, 3);
    Vector3D another(1, -1, -5);
    another += source;
    EXPECT_FLOAT_EQ(another.x, 1.0f + 5.0f);
    EXPECT_FLOAT_EQ(another.y, -1.0f + 4.0f);
    EXPECT_FLOAT_EQ(another.z, 3.0f + -5.0f);
}

TEST(Vector3D, AssigmentMinusEql)
{
    Vector3D source(5, 4, 2);
    Vector3D another(1, -1, 0);
    another -= source;
    EXPECT_FLOAT_EQ(another.x, 1.0f - 5.0f);
    EXPECT_FLOAT_EQ(another.y, -1.0f - 4.0f);
    EXPECT_FLOAT_EQ(another.z, 0.0f - 2.0f);
}

