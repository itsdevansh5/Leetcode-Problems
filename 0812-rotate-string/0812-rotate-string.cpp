class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        std::reverse(s.begin(),s.end());
        string k=s;
        for(int i=0;i<n;i++){
                k=s;
                std::reverse(k.begin(),k.begin()+i+1);
                std::reverse(k.begin()+i+1,k.end());
                if(k==goal)
                return true;



            
        }
        return false;
        
    }
};