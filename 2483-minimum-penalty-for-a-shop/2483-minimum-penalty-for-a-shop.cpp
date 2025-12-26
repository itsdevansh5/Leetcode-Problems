class Solution {
public:
    int bestClosingTime(string customers) {
        int fine0=0;
        for(auto i:customers){
            if(i=='Y')
            fine0+=1;
        }
        int minfine=fine0;
        int idx=0;
        int fine=fine0;
        for(int i=1;i<=customers.size();i++){
            if(customers[i-1]=='Y')
            fine--;
            else
            fine++;
            if(minfine>fine){
                minfine=fine;
                idx=i;
            }
        }
        return idx;
        
    }
};