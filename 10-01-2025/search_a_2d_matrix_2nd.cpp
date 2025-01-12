class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int lr=0,lc=0,hr=row-1,hc=col-1;
        while(lr<=hr&&lc<=hc){
            int val=matrix[lr][hc];
            if(val==target) return 1;
            else if(val>target){
                hc--;
            }
            else lr++;
        }
        return 0;
    }
};