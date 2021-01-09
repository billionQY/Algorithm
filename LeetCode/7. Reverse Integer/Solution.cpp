// Solution.cpp
// Created by xiaojl Jan/09/2021
// Reverse Integer

#define INTMAX_DIV10 INT_MAX / 10
#define INTMIN_DIV10 INT_MIN / 10

class Solution 
{
public:
    int reverse(int x);
    bool preview_overflow();
    
private:
    int ans;
    int mod;
};

int
Solution::reverse(int x)
{
    ans = 0;
    while (x != 0)
    {
        mod = x % 10;
        x /= 10;
        
        if (Solution::preview_overflow())
            return 0;
        
        ans = ans * 10 + mod;
    }
    
    return ans;
}

bool
Solution::preview_overflow()
{
    if (ans > INTMAX_DIV10)
        return true;
    
    if (ans == INTMAX_DIV10 && mod > 7)
        return true;
        
    if (ans < INTMIN_DIV10)
        return true;
    
    if (ans == INTMIN_DIV10 && mod < -8)
        return true;
    
    return false;
}
