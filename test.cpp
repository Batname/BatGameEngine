#include <gtest/gtest.h>

TEST(MyCategoryName, MyTestName)
{
    int i = 7;
    int j = 10;
    int test1 = i * j;
    EXPECT_EQ(70, test1);
    EXPECT_TRUE(test1 == 70);
}

TEST(MyCategoryName1, MyTestName1)
{

}
