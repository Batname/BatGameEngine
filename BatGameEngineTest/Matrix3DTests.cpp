#include "includes_test.h"

#include "Matrix3D.h"
#include "Vector3D.h"
#include "Helpers.h"

using namespace Math;

TEST(Matrix3D, Construction)
{
    Matrix3D defaultConstructor;
    EXPECT_FLOAT_EQ(defaultConstructor.r0c0, 1.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r0c1, 0.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r0c2, 0.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r1c0, 0.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r1c1, 1.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r1c2, 0.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r2c0, 0.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r2c1, 0.0f);
    EXPECT_FLOAT_EQ(defaultConstructor.r2c2, 1.0f);
    
    Matrix3D m = Matrix3D(
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    );
    
    EXPECT_FLOAT_EQ(m.r0c0, 1.0f);
    EXPECT_FLOAT_EQ(m.r0c1, 2.0f);
    EXPECT_FLOAT_EQ(m.r0c2, 3.0f);
    EXPECT_FLOAT_EQ(m.r1c0, 4.0f);
    EXPECT_FLOAT_EQ(m.r1c1, 5.0f);
    EXPECT_FLOAT_EQ(m.r1c2, 6.0f);
    EXPECT_FLOAT_EQ(m.r2c0, 7.0f);
    EXPECT_FLOAT_EQ(m.r2c1, 8.0f);
    EXPECT_FLOAT_EQ(m.r2c2, 9.0f);

}

TEST(Matrix3D, Matrix3DVectorMultiplication)
{
    Matrix3D op(
        2, -3, 5,
        4, -5, 4,
        2, 0, -4
    );
    Vector3D victrum(1, 2, 3);
    Vector3D victrumPrime = op * victrum;
    EXPECT_FLOAT_EQ(victrumPrime.x, (2 * 1) + (-3 * 2) + (5 * 3));
    EXPECT_FLOAT_EQ(victrumPrime.y, (4 * 1) + (-5 * 2) + (4 * 3));
    EXPECT_FLOAT_EQ(victrumPrime.z, (2 * 1) + (0 * 2) + (-4 * 3));

}
