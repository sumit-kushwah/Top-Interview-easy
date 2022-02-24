//
// Created by sumit Kushwah on 24/02/22.
//
#include "gtest/gtest.h"
#include "declaration.h"

namespace {
    TEST(add_tests, Add_test) {
        EXPECT_EQ(3, add(1, 2));
        EXPECT_EQ(5, add(2, 3));
    }

    TEST(add_tests, Add_Neg_test) {
        EXPECT_EQ(1, add(-1, 2));
        EXPECT_EQ(-19, add(-22, 3));
    }

    TEST(mul_tests, Mul_test) {
        EXPECT_EQ(12, multiplication(2, 6));
        EXPECT_EQ(24, multiplication(12, 2));
        EXPECT_EQ(34, multiplication(2, 17));
    }
}
