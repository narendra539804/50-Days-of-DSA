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
    ListNode* oddEvenList(ListNode* head) 
    {
        vector<int>e;
        vector<int>o;
        ListNode *t=head;
        while(head!=NULL)
        {
           e.push_back(head->val);
            head=head->next;
            if(head==NULL)
            {
                break;
            }
            o.push_back(head->val);
            head=head->next;
        }
        ListNode *p=t;
        int i=0;
        while(p!=NULL and i<e.size())
        {
            p->val=e[i];
            i++;
            p=p->next;
        }
        i=0;
        while(p!=NULL and i<o.size())
        {
            p->val=o[i];
            i++;
            p=p->next;
        }
        return t;
    }
};