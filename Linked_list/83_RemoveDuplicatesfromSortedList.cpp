//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
/*
Input: head = [1,1,2]
Output: [1,2]
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp=head;
        if(head==NULL)
            return head;
        
        ListNode *prev=temp;
        temp=temp->next;
        while(temp!=NULL and prev!=NULL)
        {
            if(temp->val==prev->val)
            {
                prev->next=temp->next;
                temp=temp->next;
            }
           else
           {    prev=prev->next;
                temp=temp->next;
               
           }
        }
        return head;
    }
};