#include<iostream>
#include "FindPivotIndex.h"

int FindPivotIndex::pivotIndex(std::vector<int>& nums)
{
    auto sum = 0;
    auto leftSum = 0;
    int i = 0;
    for (int num : nums) sum += num;
    for (int num : nums) {

        if (leftSum == sum - leftSum - num) return i;
        leftSum += num;
        i++;
    }
    return -1;
}

void FindPivotIndex::Run()
{
    std::vector<int> array = {1,7,3,6,5,6 };

    int result = pivotIndex(array);

    std::cout << result;
}
