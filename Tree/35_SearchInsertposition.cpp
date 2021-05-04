/*
https://leetcode.com/problems/search-insert-position/
Input: nums = [1,3,5,6], target = 5
Output: 2

*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
                return i;
            else if(target<nums[i])
                return i;
        }
        return nums.size();
    }
};