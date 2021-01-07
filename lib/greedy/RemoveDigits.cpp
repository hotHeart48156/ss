#include "RemoveDigits.hpp"

std::string greedy::RemoveDigits::removeKDigits(std::string nums, int k)
{
    std::vector<int> S;
    std::string result = "";
    for (int i = 0; i < nums.size(); i++)
    {
        int number = nums[i] - '0';
        while (S.size() != 0 && S[S.size() - 1] > number && k > 0)
        {
            S.pop_back();
            k--;
        }
        if (number != 0 || S.size() != 0)
        {
            S.pop_back();
            k--;
        }
    }
    while (S.size() != 0 && k > 0)
    {
        S.pop_back();
        k--;
    }
    for (int i = 0; i < S.size(); i++)
    {
        result.append(1, '0' + S[i]);
        /* code */
    }
    if (result == "")
    {
        result = "0";
        /* code */
    }
    return result;
}

greedy::RemoveDigits::RemoveDigits() {}