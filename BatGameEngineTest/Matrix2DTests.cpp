#include "includes_test.h"

#include "Matrix2D.h"

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
//    Matrix2D m;
//    EXPECT_FLOAT_EQ(m.r0c0, 1);
//    EXPECT_FLOAT_EQ(m.r0c1, 0);
}
