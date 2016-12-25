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
