///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>

#define main main_f





///
/// Summit
///

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void f(std::istream& in)
{
    int N;
    in >> N;
    std::cout << "";
}

int main(int, char* [])
{
    f(std::cin);
    return 0;
}





///
/// test
///

TEST(AtCoder, f1)
{
    std::ifstream in(L"testdata_f1.txt");
    testing::internal::CaptureStdout();

    f(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, f2)
{
    std::ifstream in(L"testdata_f2.txt");
    testing::internal::CaptureStdout();

    f(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, f3)
{
    std::ifstream in(L"testdata_f3.txt");
    testing::internal::CaptureStdout();

    f(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, f4)
{
    std::ifstream in(L"testdata_f4.txt");
    testing::internal::CaptureStdout();

    f(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
