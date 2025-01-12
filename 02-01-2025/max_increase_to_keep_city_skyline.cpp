class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sum=0,n=grid.size();
        vector<int> row(n,-1);
        vector<int> col(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]>row[i]) row[i]=grid[i][j];
                if(grid[i][j]>col[j]) col[j]=grid[i][j];
            }
        }    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=(min(row[i],col[j]));
                sum-=grid[i][j];
            }
        }
        return sum;
    }
};