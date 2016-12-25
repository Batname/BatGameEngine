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

TEST(Matrix3D, Rotation)
{
    Matrix3D op;
    op = Matrix3D::rotateZ(0);
    EXPECT_FLOAT_EQ(op.r0c0, +1.0f);
    EXPECT_FLOAT_EQ(op.r0c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c1, +1.0f);
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);

    
    op = Matrix3D::rotateZ(M_PI);
    EXPECT_FLOAT_EQ(op.r0c0, -1.0f);
    EXPECT_TRUE(closeEnough(op.r0c1, 0.0f));
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_TRUE(closeEnough(op.r1c0, 0.0f));
    EXPECT_FLOAT_EQ(op.r1c1, -1.0f);
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);


    op = Matrix3D::rotateZ(M_PI / 2);
    EXPECT_TRUE(closeEnough(op.r0c0, 0.0f));
    EXPECT_FLOAT_EQ(op.r0c1, -1.0f);
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, 1.0f);
    EXPECT_TRUE(closeEnough(op.r1c1, 0.0f));
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);


    op = Matrix3D::rotateZ(M_PI / 4);
    const float sq2ov2Cos = cosf(45.0f * M_PI / 180);
    const float sq2ov2Sin = sinf(45.0f * M_PI / 180);
    
    EXPECT_FLOAT_EQ(op.r0c0, sq2ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -sq2ov2Sin);
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, sq2ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq2ov2Cos);
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);
    
    
    op = Matrix3D::rotateZ(-M_PI / 4);
    EXPECT_FLOAT_EQ(op.r0c0, sq2ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -(-sq2ov2Sin));
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, -sq2ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq2ov2Cos);
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);
    
    
    op = Matrix3D::rotateZ(M_PI / 3);
    const float sq3ov2Cos = cosf(60.0f * M_PI / 180);
    const float sq3ov2Sin = sinf(60.0f * M_PI / 180);
    EXPECT_FLOAT_EQ(op.r0c0, sq3ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -sq3ov2Sin);
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, sq3ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq3ov2Cos);
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);
    
    
    op = Matrix3D::rotateZ(-M_PI / 3);
    EXPECT_FLOAT_EQ(op.r0c0, sq3ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -(-sq3ov2Sin));
    EXPECT_FLOAT_EQ(op.r0c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, -sq3ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq3ov2Cos);
    EXPECT_FLOAT_EQ(op.r1c2, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c0, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c1, +0.0f);
    EXPECT_FLOAT_EQ(op.r2c2, +1.0f);
}
