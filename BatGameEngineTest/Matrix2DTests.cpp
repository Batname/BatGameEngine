#include "includes_test.h"

#include "Matrix2D.h"
#include "Vector2D.h"
#include "Helpers.h"

using namespace Math;

TEST(Matrix2D, Construction)
{
    Matrix2D m;
    EXPECT_FLOAT_EQ(m.r0c0, 1.0f);
    EXPECT_FLOAT_EQ(m.r0c1, 0.0f);
    EXPECT_FLOAT_EQ(m.r1c0, 0.0f);
    EXPECT_FLOAT_EQ(m.r1c1, 1.0f);

}

TEST(Matrix2D, Matrix2DVectorMultiplication)
{
    Matrix2D op(
                +2, -3,
                +4, -5
    );
    Vector2D victrum(3, 9);
    Vector2D victrumPrime = op * victrum;
    EXPECT_FLOAT_EQ(victrumPrime.x, -21.0f);
    EXPECT_FLOAT_EQ(victrumPrime.y, -33.0f);
}

TEST(Matrix2D, Rotation)
{
    Matrix2D op;
    op = Matrix2D::rotate(0);
    EXPECT_FLOAT_EQ(op.r0c0, 1.0f);
    EXPECT_FLOAT_EQ(op.r0c1, -0.0f);
    EXPECT_FLOAT_EQ(op.r1c0, -0.0f);
    EXPECT_FLOAT_EQ(op.r1c1, 1.0f);
    
    op = Matrix2D::rotate(M_PI);
    EXPECT_FLOAT_EQ(op.r0c0, -1.0f);
    EXPECT_TRUE(closeEnough(op.r0c1, 0.0f));
    EXPECT_TRUE(closeEnough(op.r1c0, 0.0f));
    EXPECT_FLOAT_EQ(op.r1c1, -1.0f);

    op = Matrix2D::rotate(M_PI / 2);
    EXPECT_TRUE(closeEnough(op.r0c0, 0.0f));
    EXPECT_FLOAT_EQ(op.r0c1, -1.0f);
    EXPECT_FLOAT_EQ(op.r1c0, 1.0f);
    EXPECT_TRUE(closeEnough(op.r1c1, 0.0f));
    

    op = Matrix2D::rotate(M_PI / 4);
    const float sq2ov2Cos = cosf(45.0f * M_PI / 180);
    const float sq2ov2Sin = sinf(45.0f * M_PI / 180);

    EXPECT_FLOAT_EQ(op.r0c0, sq2ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -sq2ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c0, sq2ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq2ov2Cos);


    op = Matrix2D::rotate(-M_PI / 4);
    EXPECT_FLOAT_EQ(op.r0c0, sq2ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -(-sq2ov2Sin));
    EXPECT_FLOAT_EQ(op.r1c0, -sq2ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq2ov2Cos);


    op = Matrix2D::rotate(M_PI / 3);
    const float sq3ov2Cos = cosf(60.0f * M_PI / 180);
    const float sq3ov2Sin = sinf(60.0f * M_PI / 180);
    EXPECT_FLOAT_EQ(op.r0c0, sq3ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -sq3ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c0, sq3ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq3ov2Cos);
    

    op = Matrix2D::rotate(-M_PI / 3);
    EXPECT_FLOAT_EQ(op.r0c0, sq3ov2Cos);
    EXPECT_FLOAT_EQ(op.r0c1, -(-sq3ov2Sin));
    EXPECT_FLOAT_EQ(op.r1c0, -sq3ov2Sin);
    EXPECT_FLOAT_EQ(op.r1c1, sq3ov2Cos);
}
