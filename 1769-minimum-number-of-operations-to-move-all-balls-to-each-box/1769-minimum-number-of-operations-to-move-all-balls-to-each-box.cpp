class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>res(boxes.size(),0);
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(i!=j)
                res[i]+=((boxes[j]-'0')*abs(j-i));
            }
            
        }
        return res;

    }
};