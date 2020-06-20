///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>
#include <filesystem>

#define main main_e





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
    const std::string path("testdata_e1.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, e2)
{
    const std::string path("testdata_e2.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, e3)
{
    const std::string path("testdata_e3.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, e4)
{
    const std::string path("testdata_e4.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    e(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
