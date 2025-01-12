class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s=nums.size();
        if(s==1) return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[s-1]>nums[s-2])return s-1;
        int low=1,high=s-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]>nums[mid-1]) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};