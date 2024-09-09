#include "pch.h"
#include "E:\Kostya\programs\LastRepition\LastRepition\Header.cpp"
#include <vector>

using namespace std;

extern vector<int> increaseVecElements(const std::vector<int>& vec, int n);

TEST(TestIncreasingVecElems, BasicTest) {
    vector<int> input = { 1, 2, 3 };
    int n = 2;
    vector<int> expected = { 3, 4, 5 };
    EXPECT_EQ(increaseVecElements(input, n), expected);
}

TEST(TestIncreasingVecElems, NegativeNums) {
    vector<int> input = { -1, -2, -3 };
    int n = 1;
    vector<int> expected = { 0, -1, -2 };
    EXPECT_EQ(increaseVecElements(input, n), expected);
}

TEST(TestIncreasingVecElems,IncreaseZero) {
    vector<int> input = { 1, 2, 3 };
    int n = 0;
    vector<int> expected = { 1, 2, 3 };
    EXPECT_EQ(increaseVecElements(input, n), expected);
}

TEST(TestIncreasingVecElems, EmptyVec) {
    vector<int> input = {};
    int n = 3;
    vector<int> expected = {};
    EXPECT_EQ(increaseVecElements(input, n), expected);
}

TEST(TestIncreasingVecElems, IncreaseNegative) {
    vector<int> input = { 1, 2, 3 };
    int n = -3;
    vector<int> expected = { -2, -1, 0 };
    EXPECT_EQ(increaseVecElements(input, n), expected);
}