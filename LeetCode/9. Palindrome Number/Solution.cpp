// Solution.cpp
// Created by xiaojl Jan/09/2021
// Palindrome Number

class Solution 
{
public:
    bool isPalindrome(int x);
};

bool
Solution::isPalindrome(int x)
{
    if (x < 0)
        return false;
    
    vector<int> v;
    while (x != 0)
    {
        int mod = x % 10;
        x /= 10;
        v.push_back(mod);
    }
    
    for (int i = 0, j = v.size() - 1; i < j; i++, j--)
    {
        if (v[i] != v[j])
            return false;
    }
    
    return true;
}
