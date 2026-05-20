class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>freq(n);
        vector<int>res(n);
        int pre=0;
        for(int i=0;i<n;i++){
            freq[A[i]-1]++;
            freq[B[i]-1]++;
            if(A[i]!=B[i])
            res[i]=pre+(freq[A[i]-1]==2)+(freq[B[i]-1]==2);
            else res[i]=pre+1;
            pre=res[i];
        }
        return res;
    }
};