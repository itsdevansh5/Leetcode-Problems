class Solution {
public:
    string minWindow(string s, string t) {
     int m=s.size();
     int n=t.size();
     int i=0;
unordered_map<char,int>p;
for(auto i:t){
    p[i]++;
}
int k=0;
unordered_map<char,int>q;
int indx=-1;
int minl=INT_MAX;
     for(int j=0;j<m;j++){
     char c=s[j];
     q[c]++;

     if(p.find(c)!=p.end() && p[c]==q[c]) k++;

     while(k==p.size()){
          if(minl>(j-i+1)){
            minl=j-i+1;
            indx=i;
            

          }

        char r=s[i];
        q[r]--;

        if(p.find(r)!=p.end() && p[r]>q[r]) k--;

        i++;


     }
      
     }   
     if(indx<0) return "";
     return s.substr(indx,minl);
    }
};