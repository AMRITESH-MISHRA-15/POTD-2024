class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1)return 1;
        int a=1;
        for(int i=nums.size()-2;i>=0;i--){
            nums[i]-=a;
            if(nums[i]<0){
                a++;
            }
            else{
                if(i==0) return 1;
                a=1;
            }
        }
        return 0;
    }
};