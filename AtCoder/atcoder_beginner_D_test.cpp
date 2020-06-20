///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>
#include <filesystem>

#define main main_d





///
/// Summit
///

#include <iostream>
#include <vector>
#include <set>
#include <list>
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
    const std::string path("testdata_d1.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, d2)
{
    const std::string path("testdata_d2.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, d3)
{
    const std::string path("testdata_d3.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, d4)
{
    const std::string path("testdata_d4.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    d(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
