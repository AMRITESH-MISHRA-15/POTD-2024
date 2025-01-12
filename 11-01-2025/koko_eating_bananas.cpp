class Solution {
public:
    long long func(vector<int>& arr,int speed){
        long long x=0;
        // float k=(float)speed;
        for(int i=0;i<arr.size();i++){
            // x+=ceil(arr[i]/k);
            x+=(arr[i]/speed);
            if(arr[i]%speed)x++;
        }
        return x;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long ans=-1,low=1,high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long val=func(piles,mid);
            if(val<=h){
                high=mid-1;
                ans=mid;
            }
            else low=mid+1;
        }
        return ans;
    }
};