class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int l=0;
        int h=colors.size()-1;
        int res=0;
        while(l<h){
            if(colors[l]!=colors[h]){ 
                res=max(res,h-l);
            }
            l++;
        }
        l=0;
        while(l<h){
             if(colors[l]!=colors[h]) res=max(res,h-l);
            h--;
        }
        return res;
    }
};