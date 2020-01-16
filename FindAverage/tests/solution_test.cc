#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FindAverageTest, HandlesConsecutiveNumbers) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  EXPECT_DOUBLE_EQ(solution.FindAverage(inputs), 2.5);

}
TEST(FindAverageTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4, -1};
  EXPECT_DOUBLE_EQ(solution.FindAverage(inputs), 1.8);
}

TEST(FindAverageTest, HandlesSizeOne) {
  Solution solution;
  std::vector<int> inputs = {2};
  EXPECT_DOUBLE_EQ(solution.FindAverage(inputs), 2);
}

TEST(FindAverageTest, HandlesEmptyVector) {
  Solution solution;
  std::vector<int> inputs = {};
  EXPECT_EQ(solution.FindAverage(inputs), -1);
}