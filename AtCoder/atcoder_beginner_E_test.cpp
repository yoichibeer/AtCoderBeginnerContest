///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>

#define main main_e





///
/// Summit
///

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void e(std::istream& in)
{
    int N;
    in >> N;
    std::cout << "";
}

int main(int, char* [])
{
    e(std::cin);
    return 0;
}





///
/// test
///

TEST(AtCoder, e1)
{
    std::ifstream in("testdata_e1.txt");
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, e2)
{
    std::ifstream in("testdata_e2.txt");
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, e3)
{
    std::ifstream in("testdata_e3.txt");
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, e4)
{
    std::ifstream in("testdata_e4.txt");
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
