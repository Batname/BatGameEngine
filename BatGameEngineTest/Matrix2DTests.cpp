#include "includes_test.h"

#include "Matrix2D.h"
#include "Vector2D.h"

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
