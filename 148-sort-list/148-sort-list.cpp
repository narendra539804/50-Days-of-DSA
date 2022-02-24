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
    ListNode* sortList(ListNode* head) 
    {
        vector<int>arr;
        ListNode *p=head;
        while(p!=NULL)
        {
            arr.push_back(p->val);
            p=p->next;
        }
        sort(arr.begin(),arr.end());
        p=head;
        for(auto x:arr)
        {
            p->val=x;
            p=p->next;
            x++;  
        }
       
        return head;
    }
};