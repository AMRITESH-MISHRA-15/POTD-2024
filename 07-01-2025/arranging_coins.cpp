class Solution {
public:
    int arrangeCoins(int n) {
        long long low=1;
        long long high=n;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long val=mid*(mid+1)/2;
            if(val==n){
                ans=mid;
                break;
            }
            else if(val<n){
                low=mid+1;
            }
            else if(low==high){
                ans=mid-1;
                break;
            }
            else high=mid;
        }
        return ans;
    }
};