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
    ListNode* mergeNodes(ListNode* head) 
    {
     vector<int>res;
     ListNode *t=head;
        while(t!=NULL)
        {
            res.push_back(t->val);
            t=t->next;
        }
        vector<int>ans;
        for(int i=0;i<res.size();)
        {
            int sum=0;
            if(res[i]==0)
            {
                i++;
                while(i<res.size() and res[i]!=0)
                {
                    sum+=res[i];
                    i++;
                }
                if(sum==0)
                {
                    continue;
                }
                ans.push_back(sum);  
            }else{
                i++;
            }
        }
        ListNode *p=NULL,*q=NULL;
        for(auto x:ans)
        {
            ListNode *t=new ListNode(x);
            if(p==NULL)
            {
                p=t;
                q=t;
            }
            else{
                q->next=t;
                q=t;
            }
        }
        return p;
    }
};