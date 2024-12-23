class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size=nums.size(),count=0;
        vector<int> arr(size,0);
        for(int i=0;i<size;i++){
            count=0;
            for(int j=0;j<size;j++){
                if(nums[j]<nums[i]) count++;
            }
            arr[i]=count;
        }
        return arr;
    }
};