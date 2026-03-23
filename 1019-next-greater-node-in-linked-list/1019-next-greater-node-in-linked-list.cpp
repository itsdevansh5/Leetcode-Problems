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
    vector<int> nextLargerNodes(ListNode* head) {

        ListNode* temp=head;
        stack<int>st;
        vector<int>values;
        while(temp!=nullptr){
            values.push_back(temp->val);
         temp=temp->next;   
        }
        vector<int>res(values.size(),0);
        for(int i=values.size()-1;i>=0;i--){
            int v=values[i];
            while(!st.empty() && st.top()<=v){
                st.pop();
            }
            if(!st.empty()) res[i]=st.top();

            st.push(v);
        }
        return res;
    }
};