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
    vector<int>add(vector<int>a,vector<int>b){
        vector<int>res;
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0 || j>=0 || carry){
            int p;
            int q;
            if(j<0)  q=0;
            else q=b[j];
            if(i<0) p=0;
            else  p=a[i];
            int sum=p+q+carry;
            res.push_back(sum%10);
            carry=sum/10;
            i--;
            j--;


        }
        return res;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1;
        ListNode *t2=l2;
        vector<int>v1;
        vector<int>v2;
        while(t1!=nullptr){
            v1.push_back(t1->val);
            t1=t1->next;
            
        }
        while(t2!=nullptr){
            v2.push_back(t2->val);
            t2=t2->next;
        }
        vector<int>res;
        if(v1.size()>v2.size())
        res=add(v1,v2);
        else
        res=add(v2,v1);

        std::reverse(res.begin(),res.end());
        ListNode dummy;
        ListNode *temp=&dummy;
        for(auto i:res){
            ListNode * n= new ListNode(i);
            temp->next=n;
            temp=n;
        }
        return dummy.next;
        
        
    



    }
};