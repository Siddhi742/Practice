/*
https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
Input: position = [1,2,3]
Output: 1
Explanation: First step: Move the chip at position 3 to position 1 with cost = 0.
Second step: Move the chip at position 2 to position 1 with cost = 1.
Total cost is 1.
*/




class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        map<int,int>s1;
        map<int,int>::iterator itr;
        int even=0,odd=0;
        for(int i=0;i<position.size();i++)
        {
            s1[position[i]]++;
        }
        for(itr=s1.begin();itr!=s1.end();itr++)
        {
            if(itr->first%2==0)
                even+=itr->second;
            else
                odd+=itr->second;
        }
   int ans= (even>odd)? odd: even;
        return ans;
    }
};