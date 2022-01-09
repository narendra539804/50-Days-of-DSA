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
    int pairSum(ListNode* head)
    {
     int max=INT_MIN;
     vector<int>nums;
    while(head!=NULL)
    {
        nums.push_back(head->val);
        head=head->next;
    }
        int n=nums.size();
    for(int i=0;i<n/2;i++)
    {
        if(nums[i]+nums[n-i-1]>max)
        {
            max=nums[i]+nums[n-i-1];
        }
    }
        return max;
    }
};