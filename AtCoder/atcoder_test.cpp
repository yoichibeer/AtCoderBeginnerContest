#include <gtest/gtest.h>

#include <iostream>
#include <array>
#include <vector>

#include "detect_memory_leak.h"

int a(int, char**)
{
    std::cout << "hello";
    return 0;
}

TEST(AtCoder, sample)
{
    testing::internal::CaptureStdout();
    a(0, nullptr);
    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "hello");
}
