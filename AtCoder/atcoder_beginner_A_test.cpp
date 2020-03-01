///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>

#define main main_a





///
/// Summit
///

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void a(std::istream& in)
{
    int N;
    in >> N;
    std::cout << "";
}

int main(int, char* [])
{
    a(std::cin);
    return 0;
}





///
/// test
///

TEST(AtCoder, a1)
{
    std::ifstream in("testdata_a1.txt");
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, a2)
{
    std::ifstream in("testdata_a2.txt");
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, a3)
{
    std::ifstream in("testdata_a3.txt");
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, a4)
{
    std::ifstream in("testdata_a4.txt");
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
