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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode *slow=head,*prev=NULL;
        ListNode*fast=head;
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return NULL;
        }
        while(fast!=NULL and fast->next!=NULL )
        {
            prev=slow;
            slow=slow->next;
            if(fast->next!=NULL)
            {
                fast=fast->next->next;
            }
            else{
                fast=fast->next;
            }
        }
        prev->next=slow->next;
        delete slow;
        return head;
    }
};