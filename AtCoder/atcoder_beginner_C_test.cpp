///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>
#include <filesystem>

#define main main_c





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
    const std::string path("testdata_c1.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, c2)
{
    const std::string path("testdata_c2.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, c3)
{
    const std::string path("testdata_c3.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, c4)
{
    const std::string path("testdata_c4.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    c(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
