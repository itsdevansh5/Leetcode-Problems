class Solution {
public:
    vector<int>arr;
    int maxd=-1;
    Solution(vector<int>& w) {
        this->arr=w;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            arr[i]=sum;
        }
        this->maxd=sum;
    }
    
    int pickIndex() {
        int r=(rand() % maxd) +1;
        int l=0;
        int h=this->arr.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==r) return mid;
            else if(arr[mid]>r) h=mid-1;
            else l=mid+1;
        }
        return l;

    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */