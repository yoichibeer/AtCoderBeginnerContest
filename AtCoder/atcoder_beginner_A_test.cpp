///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>
#include <filesystem>

#define main main_a





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
    const std::string path("testdata_a1.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, a2)
{
    const std::string path("testdata_a2.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, a3)
{
    const std::string path("testdata_a3.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, a4)
{
    const std::string path("testdata_a4.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    a(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
