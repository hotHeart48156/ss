#include "WiggleSubsequence.hpp"

int greedy::WiggleSubsequence::wiggleMaxLength(std::vector<int> &nums)
{
    if (nums.size() < 2)
    {
        return nums.size();
    }

    static const int BEGIN = 0;
    static const int UP = 1;
    static const int DOWN = 2;
    int STATE = BEGIN;
    int max_length = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        switch (STATE)
        {
        case BEGIN:
            if (nums[i - 1]<nums[i])
            {
                STATE = UP;
                max_length++;
                /* code */
            }
            else if (nums[i - 1] > nums[i])
            {
                STATE = DOWN;
                max_length++;
            }

            break;
        case UP:
            if (nums[i] <nums[i - 1] )
            {
                STATE = DOWN;
                max_length++;
                /* code */
            }
            break;
        case DOWN:
        if (nums[i]>nums[i-1])
        {
            STATE=UP;
            max_length++;
            /* code */
        }
        break;
        
        default:
            break;
        }
        /* code */
    }
    return max_length;
}
greedy::WiggleSubsequence::WiggleSubsequence() {}