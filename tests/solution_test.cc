#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeapSortShould, ReturnAscendingOrder) {
  Solution solution;
  std::vector<int> actual = {2,4,1,5,7,3,8,6};
  std::vector<int> expected = {1,2,3,4,5,6,7,8};
  solution.heap_sort(actual);
  EXPECT_EQ(expected, actual);
}