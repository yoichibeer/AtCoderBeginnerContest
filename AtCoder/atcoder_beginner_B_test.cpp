///
/// for test
///
#include <gtest/gtest.h>
#include "detect_memory_leak.h"
#include <fstream>
#include <filesystem>

#define main main_b





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
    const std::string path("testdata_b1.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, b2)
{
    const std::string path("testdata_b2.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");

}

TEST(AtCoder, b3)
{
    const std::string path("testdata_b3.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}

TEST(AtCoder, b4)
{
    const std::string path("testdata_b4.txt");
    if (std::filesystem::is_empty(path)) return;

    std::ifstream in(path);
    testing::internal::CaptureStdout();

    b(in);

    const std::string actual = testing::internal::GetCapturedStdout();
    EXPECT_EQ(actual, "");
}
