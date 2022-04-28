/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        int len1=0,len2=0;
        ListNode *p=headA;
        while(p!=NULL)
        {
            p=p->next;
            len1++;
        }
        p=headB;
        while(p!=NULL)
        {
            p=p->next;
            len2++;
        }
        int x=abs(len2-len1);
        if(len2>len1)
        {
            while(x--)
            {
                headB=headB->next;
            }
        }
        else{
            while(x--)
            {
                headA=headA->next;
            }
        }
        while(headA!=NULL and headB!=NULL)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};