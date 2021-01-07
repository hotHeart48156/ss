#include "subset.hpp"
backtrack::subset::subset() {}
std::vector<std::vector<int>> backtrack::subset::subsets(int i, std::vector<int> &nums, std::vector<int> &item, std::vector<std::vector<int>> &result)
{
    if (i > nums.size())
    {
        return;
    }
    item.push_back(nums[i]);
    result.push_back(item);
    subsets(i + 1, nums, item, result);
}