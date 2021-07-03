#include <gtest/gtest.h>

TEST(hash_table, print)
{
    GTEST_ASSERT_EQ(32, 32);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}