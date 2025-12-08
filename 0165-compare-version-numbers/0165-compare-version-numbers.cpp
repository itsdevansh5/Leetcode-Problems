class Solution {
public:
    int compareVersion(string version1, string version2) {
         vector<int>v1;
         vector<int>v2;
         stringstream s1(version1);
         stringstream s2(version2);
         string ver;
         while(getline(s1,ver,'.')){
            int a=stoi(ver);
            v1.push_back(a);
         }
         while(getline(s2,ver,'.')){
            int b=stoi(ver);
            v2.push_back(b);
         }
         for(int i=0;i<max(v1.size(),v2.size());i++){
            int m,n;
            if(i>=v1.size())
            m=0;
            else
            m=v1[i];
            if(i>=v2.size())
            n=0;
            else
            n=v2[i];

            if(m==n)
            continue;
            else if(m>n)
            return 1;
            else
            return -1;
         }
         return 0;
    }
};