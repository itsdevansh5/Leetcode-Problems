class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n,0);

        int balls = 0;
        int moves = 0;

        // left → right
        for(int i=0;i<n;i++){
            res[i] += moves;
            if(boxes[i] == '1') balls++;
            moves += balls;
        }

        balls = 0;
        moves = 0;

        // right → left
        for(int i=n-1;i>=0;i--){
            res[i] += moves;
            if(boxes[i] == '1') balls++;
            moves += balls;
        }

        return res;
    }
};