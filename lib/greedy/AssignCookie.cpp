#include "AssignCookie.hpp"

int greedy::AssignCookie::findContentChildren(std::vector<int> &cookie, std::vector<int> chindren)
{
    std::sort(cookie.begin(), cookie.end());
    std::sort(chindren.begin(), chindren.end());
    int cookIndex = 0;
    int chindrenIndex = 0;
    //不能直接遍历children，因为
    while (chindrenIndex < chindren.size() && cookIndex < cookie.size())
    {
        if (chindren[chindrenIndex] <= cookie[cookIndex])
        {
            chindrenIndex++;
        }
        cookIndex++;
    }
    return chindrenIndex;
}
greedy::AssignCookie::AssignCookie() {}