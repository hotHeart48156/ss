#include <vector>

namespace backtrack
{
    class subset
    {
    private:
    public:
        subset(/* args */);
        std::vector<std::vector<int>> subsets(int i, std::vector<int> &nums, std::vector<int> &item, std::vector<std::vector<int>> &result);
    };

} 
