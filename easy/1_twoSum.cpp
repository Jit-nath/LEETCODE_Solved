/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1 :
    Input : nums = [ 2, 7, 11, 15 ], target = 9
    Output : [ 0, 1 ]

Explanation : Because nums[0] + nums[1] == 9, we return [ 0, 1 ].

Example 2 :
    Input : nums = [ 3, 2, 4 ], target = 6
    Output : [ 1, 2 ]
Example 3 :
    Input : nums = [ 3, 3 ], target = 6
    Output : [ 0, 1 ]

Constraints :
            2 <= nums.length <= 10^4
            -10^9 <= nums[i] <= 10^9
            -10^9 <= target <= 10^9
Only one valid answer exists.

Follow-up : Can you come up with an algorithm that is less than O(n^2) time complexity ?
*/

#include <iostream>
#include <array>
#include <vector>
using namespace std;
array<int, 2> twoSum(const vector<int> &nums, int target)
{
    array<int, 2> result;
    for (size_t i = 0; i < nums.size() - 1; i++)
    {
        for (size_t j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result = {-1, -1};
}

void print(array<int, 2> array)
{
    cout << array[0] << "," << array[1] << "\n";
}

int main()
{
    int target = 10;
    vector<int> nums = {1, 2, 6, 4, 10, 2};

    array<int, 2>
        result = twoSum(nums, target);

    print(result);

    return 0;
}