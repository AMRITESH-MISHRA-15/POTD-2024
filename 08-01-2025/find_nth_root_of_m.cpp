class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        int low=1,high=m;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(pow(mid,n)==m) return mid;
            else if(pow(mid,n)>m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};