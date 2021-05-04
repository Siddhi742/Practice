//https://leetcode.com/problems/defanging-an-ip-address/
/*

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
*/


class Solution {
public:
    string defangIPaddr(string address) {
        string s1="";
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
                s1+="[.]";
            else
                s1+=address[i];
        }
        return s1;
    }
};