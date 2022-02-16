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
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode *p=head;
        if(head==NULL)
        {
            return NULL;
        }
         if(head->next==NULL)
        {
            return head;
        }
        while(p!=NULL and p->next!=NULL)
        {
           int x=p->val;
           int y=p->next->val;
           p->val=y;
           p=p->next;
           p->val=x;
            p=p->next;
        }
        return head;
        
    }
};