// Solution.cpp
// Created by xiaojl Jan/09/2021
// Two Sum

class Solution 
{
public:
    vector<int> twoSum(const vector<int>& nums, const int target);
};

vector<int>
Solution::twoSum(const vector<int>& nums, const int target)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
                return {i, j};
        }
    }

    return {};
}
