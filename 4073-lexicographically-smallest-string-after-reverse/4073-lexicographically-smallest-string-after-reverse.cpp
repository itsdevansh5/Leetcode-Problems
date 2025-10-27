class Solution {
public:
    string lexSmallest(string s) {
        string org=s;
        string mins=s;
        for(int i=0;i<s.size();i++){
            int k=i+1;
            auto ite=s.end();
            if(i==0){
                while(s.begin()+k<=s.end()){
                    std::reverse(s.begin(),s.begin()+k);
                    if(mins>s)
                    mins=s;
                    s=org;
                    k++;
                }
                }
                else{
                    std::reverse(s.begin()+i,ite);
                    if(s<mins)
                    mins=s;
                    s=org;
                }
            }
        
        return mins;
        
    }
};