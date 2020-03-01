///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>

#define main main_c





///
/// Summit
///

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void c(std::istream& in)
{
    int N;
    in >> N;
    std::cout << "";
}

int main(int, char* [])
{
    c(std::cin);
    return 0;
}





///
/// test
///

TEST(AtCoder, c1)
{
    std::ifstream in(L"testdata_c1.txt");
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, c2)
{
    std::ifstream in(L"testdata_c2.txt");
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, c3)
{
    std::ifstream in(L"testdata_c3.txt");
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, c4)
{
    std::ifstream in(L"testdata_c4.txt");
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
