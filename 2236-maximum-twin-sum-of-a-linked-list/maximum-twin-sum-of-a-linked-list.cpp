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
    int pairSum(ListNode* head) {
        vector<int>v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }

        int i=0;
        int j=v.size()-1;
        int sum=0;
        int maxsum=0;
        while(i<j){
            sum=v[i]+v[j];
            maxsum=max(maxsum,sum);
            i++;
            j--;
        }
        return maxsum;
        
    }
};