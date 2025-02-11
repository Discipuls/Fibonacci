#include <gtest/gtest.h>
#include "../fibonacci.h"

TEST(FibonacciTest, Zero) {
    Fibonacci fib;
    EXPECT_EQ(fib.CalculateFibonacci(0), 0);
}

TEST(FibonacciTest, One) {
    Fibonacci fib;
    EXPECT_EQ(fib.CalculateFibonacci(1), 1);
}

TEST(FibonacciTest, Two) {
    Fibonacci fib;
    EXPECT_EQ(fib.CalculateFibonacci(2), 1);
}

TEST(FibonacciTest, Ten) {
    Fibonacci fib;
    EXPECT_EQ(fib.CalculateFibonacci(10), 55);
}

TEST(FibonacciTest, LargeValue) {
    Fibonacci fib;
    EXPECT_EQ(fib.CalculateFibonacci(50), 12586269025LL);
}

TEST(FibonacciTest, NegativeValue) {
    Fibonacci fib;
    EXPECT_THROW(fib.CalculateFibonacci(-1), std::invalid_argument);
}

TEST(FibonacciTest, TooLargeValue) {
    Fibonacci fib;
    EXPECT_THROW(fib.CalculateFibonacci(94), std::invalid_argument);
}
