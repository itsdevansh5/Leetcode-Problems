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
        int n=0;
        ListNode * temp=head;
        while(temp!=nullptr){
          temp=temp->next;
          n++;
        }
        vector<int>arr(n);
        temp=head;
        int i=0;
        while(temp!=nullptr){
          arr[i]=temp->val;
          i++;
          temp=temp->next;
        }
        int l=0;
        int h=n-1;
        int maxs=0;
        while(l<h){
               maxs=max(maxs,arr[l]+arr[h]);
               l++;
               h--;
        }
        return maxs;
    }
};