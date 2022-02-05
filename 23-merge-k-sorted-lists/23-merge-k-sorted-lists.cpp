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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        if(lists.size()==0)
        {
            return NULL;
        }
        vector<int> res;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i]!=NULL)
            {
                int x=lists[i]->val;
                res.push_back(x);
                lists[i]=lists[i]->next;
            }
        }
       
         if(res.size()==0)
        {
            return NULL;
        }
        sort(res.begin(),res.end());
        ListNode *t=new ListNode;
        ListNode *r=t;
        t->val=res[0];
        t->next=NULL;
        for(int i=1;i<res.size();i++)
        {
          ListNode *p=new  ListNode;
          p->val=res[i];
          p->next=NULL;
          t->next=p;
          t=p;
        }
        return r;
    }
};