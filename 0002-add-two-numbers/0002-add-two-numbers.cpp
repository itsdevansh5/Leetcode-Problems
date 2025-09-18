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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * a=l1;
        ListNode * b=l2;
        int p=1;
        int q=1;
        while(a->next!=nullptr){
            a=a->next;
            p++;

        }
         while(b->next!=nullptr){
            b=b->next;
            q++;

        }
        if(p>=q){
        a=l1;
        b=l2;
        }
        else{
        b=l1;
        a=l2;
        }
        int carry=0;
        int m,n;
         ListNode * vk;
        while((a!=nullptr)||(b!=nullptr)){
            if(a==nullptr)
            m=0;
            else
            m=a->val;
            if(b==nullptr)
            n=0;
            else
            n=b->val;

        
            int sum=m+n+carry;
            if(sum>9){
                carry=1;
                a->val=sum%10;
            }
            else{
            a->val=sum;
            carry=0;
            }
            if(a!=nullptr){
               vk=a;
            a=a->next;
            }
            if(b!=nullptr)
            b=b->next;



            
        }
        if(carry!=0){
            ListNode * n=new ListNode(carry);
            vk->next=n;
        }
        return ((p>=q)?l1:l2);
        
    }
};