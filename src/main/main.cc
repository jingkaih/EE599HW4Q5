#include <iostream>
#include "src/lib/solution.h"
#include <queue>

int main()
{
    Solution solution;
    std::vector<int> myvect = {4,2,3,5,1,6};
    solution.heap_sort(myvect);
    for(auto x : myvect)
    std::cout << x << ' ';

    return EXIT_SUCCESS;
}