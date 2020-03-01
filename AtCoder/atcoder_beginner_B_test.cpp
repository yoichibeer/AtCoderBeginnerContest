///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>

#define main main_b





///
/// Summit
///

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

void b(std::istream& in)
{
    int N;
    in >> N;
    std::cout << "";
}

int main(int, char* [])
{
    b(std::cin);
    return 0;
}





///
/// test
///

TEST(AtCoder, b1)
{
    std::ifstream in("testdata_b1.txt");
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, b2)
{
    std::ifstream in("testdata_b2.txt");
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, b3)
{
    std::ifstream in("testdata_b3.txt");
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, b4)
{
    std::ifstream in("testdata_b4.txt");
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
