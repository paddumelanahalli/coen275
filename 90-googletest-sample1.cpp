#include "pch.h"
#include <iostream>

int factorial(int n)
{
    if (n == 0)
        return 1;
    return (n * factorial(n - 1)); // recurssive function call
}

TEST(FactorialTest, FactorialOfZeroShouldBeOne)
{
    ASSERT_EQ(1, factorial(0));
}

TEST(FactorialTest, FactorialOfPositiveNos)
{
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(120, factorial(5));
}

