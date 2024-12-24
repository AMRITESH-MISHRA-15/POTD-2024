class Solution {
public:
    void swap(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void sortColors(vector<int>& nums) {
        // int size=nums.size(),c0=0,c1=0;
        // for(int i=0;i<size;i++){
        //     if(nums[i]==0) c0++;
        //     else if(nums[i]==1) c1++;
        // }
        // for(int i=0;i<size;i++){
        //     if(i<c0) nums[i]=0;
        //     else if(i<(c0+c1)) nums[i]=1;
        //     else nums[i]=2;
        // }
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(&nums[low], &nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1)
                mid++;
            else {
                swap(&nums[high], &nums[mid]);
                high--;
            }
        }
    }
};