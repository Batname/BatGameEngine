#include "includes_test.h"

#include "Matrix3D.h"
#include "Vector3D.h"
#include "Helpers.h"

using namespace Math;

TEST(Matrix3D, Construction)
{
    Matrix3D m;
    EXPECT_FLOAT_EQ(m.r0c0, 1.0f);
    EXPECT_FLOAT_EQ(m.r0c1, 0.0f);
    EXPECT_FLOAT_EQ(m.r0c2, 0.0f);
    EXPECT_FLOAT_EQ(m.r1c0, 0.0f);
    EXPECT_FLOAT_EQ(m.r1c1, 1.0f);
    EXPECT_FLOAT_EQ(m.r1c2, 0.0f);
    EXPECT_FLOAT_EQ(m.r2c0, 0.0f);
    EXPECT_FLOAT_EQ(m.r2c1, 0.0f);
    EXPECT_FLOAT_EQ(m.r2c2, 1.0f);
    
    Matrix3D defaultConstructor;
    
}
