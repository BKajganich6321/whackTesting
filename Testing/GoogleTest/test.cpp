#include "gtest/gtest.h"
#include "../Testing/arithmetic.h"

// Test the add function
TEST(ArithmeticTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, -1), -2);
    EXPECT_EQ(add(0, 0), 0);
    EXPECT_EQ(add(-5, 5), 0);
}

// Main function to run all tests
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
