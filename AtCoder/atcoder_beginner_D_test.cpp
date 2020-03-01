///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>

#define main main_d





///
/// Summit
///

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void d(std::istream& in)
{
    int N;
    in >> N;
    std::cout << "";
}

int main(int, char* [])
{
    d(std::cin);
    return 0;
}





///
/// test
///

TEST(AtCoder, d1)
{
    std::ifstream in(L"testdata_d1.txt");
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, d2)
{
    std::ifstream in(L"testdata_d2.txt");
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, d3)
{
    std::ifstream in(L"testdata_d3.txt");
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, d4)
{
    std::ifstream in(L"testdata_d4.txt");
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
