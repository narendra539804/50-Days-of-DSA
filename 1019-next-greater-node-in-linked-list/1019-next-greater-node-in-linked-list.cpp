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
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int>res;
        ListNode *t=head;
        while(t!=NULL)
        {
            ListNode *p=t;
            int x=t->val;
            int ans=0;
            while(p!=NULL)
            {
                if(p->val>x)
                {
                    ans=p->val;
                    break;
                }
                p=p->next;
            }
            t=t->next;
            res.push_back(ans);
        }
       return res;
    }
};