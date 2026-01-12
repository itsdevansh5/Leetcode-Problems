class Solution {
public:
    string minWindow(string s, string t) {
     int m=s.size();
     int n=t.size();
     int i=0;
int need[256]={0};
int distinct=0;
for(auto i:t){
    if(need[i]==0) distinct++;
    need[i]++;
}
int k=0;
int window[256]={0};
int indx=-1;
int minl=INT_MAX;
     for(int j=0;j<m;j++){
     char c=s[j];
     window[c]++;

     if(need[c]>0 && need[c]==window[c]) k++;

     while(k==distinct){
          if(minl>(j-i+1)){
            minl=j-i+1;
            indx=i;
            

          }

        char r=s[i];
        window[r]--;

        if(need[r]>0 && need[r]>window[r]) k--;

        i++;


     }
      
     }   
     if(indx<0) return "";
     return s.substr(indx,minl);
    }
};