class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>hash;
        hash['I']=1;
        hash['V']=5;
        hash['X']=10;
        hash['L']=50;
        hash['C']=100;
        hash['D']=500;
        hash['M']=1000;
        int result=0;
        bool k=false;
        for(int i=0;i<s.size()-1;i++){
            if( (i!=s.size()-1)&&(hash[s[i]]>=hash[s[i+1]]))
            result+=hash[s[i]];
            if( (i!=s.size()-1)&& (hash[s[i]]<hash[s[i+1]])){
                if(i==s.size()-2)
                k=true;
                result+=(hash[s[i+1]]-hash[s[i]]);
                i++;
            }



        }
        if(k==false)
        result+=hash[s[s.size()-1]];
        return result;
        
    }
};