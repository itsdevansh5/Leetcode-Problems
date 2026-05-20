class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        unordered_set<int>a;
        unordered_set<int>b;
        vector<int>res(n);
        int pre=0;
        for(int i=0;i<n;i++){
            if(A[i]==B[i]) res[i]=pre+1;
            else {
                res[i]=pre+(a.count(B[i]))+(b.count(A[i]));
            }
            pre=res[i];
            a.insert(A[i]);
            b.insert(B[i]);
        }
        return res;
    }
};