#include<iostream>
#include <vector>
#include "RunningSum.h"

std::vector<int> RunningSum::runningSum(std::vector<int>& nums)
{
    std::vector<int> sum = { nums[0] };
    for (int i = 1;i < nums.size();i++) {
        sum.push_back(sum.back() + nums[i]);
    }
    return sum;
}

void RunningSum::Run()
{
    std::vector<int> array = { 3,1,2,10,1 };

    std::vector<int> result = runningSum(array);

    for (int i = 0; i < array.size(); i++)
    {
        i&& std::cout << ",";
        std::cout << result[i];
    }

}


