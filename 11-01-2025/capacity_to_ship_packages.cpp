class Solution {
public:
    int func(vector<int>arr,int capacity){
        int k=capacity,days=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>k){
                days++;
                k=capacity;
            }
            k-=arr[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0LL);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=func(weights,mid);
            if(val<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};