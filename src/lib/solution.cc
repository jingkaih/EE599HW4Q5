#include "solution.h"

void Solution::heap_sort(std::vector<int> &input)
{
  std::priority_queue<int, std::vector<int>, std::greater<int>> myqueue;
  for(auto x: input)
  myqueue.push(x);
  input.clear();
  while(!myqueue.empty())
  {
    input.push_back(myqueue.top());
    myqueue.pop();
  }
}
