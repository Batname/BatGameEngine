#include "includes_test.h"

#include "Matrix2D.h"

using namespace Math;

TEST(Matrix2D, DefaultConstructor)
{
    Matrix2D m;
    EXPECT_FLOAT_EQ(m.r0c0, 1);
    EXPECT_FLOAT_EQ(m.r0c1, 0);
}
