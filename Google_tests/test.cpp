//
// Created by sumit Kushwah on 24/02/22.
//
#include "gtest/gtest.h"
#include "declaration.h"

namespace {
    TEST(tests, myatoi) {
        EXPECT_EQ(INT_MIN, myAtoi("-2147483648"));
        EXPECT_EQ(42, myAtoi("42"));
        EXPECT_EQ(-42, myAtoi("   -42"));
        EXPECT_EQ(4193, myAtoi("4193 with words"));
        EXPECT_EQ(12345678, myAtoi("  0000000000012345678"));
    }
    TEST(tests, multiplication) {
        EXPECT_EQ(5, multiplication(1, 5));
    }

}
