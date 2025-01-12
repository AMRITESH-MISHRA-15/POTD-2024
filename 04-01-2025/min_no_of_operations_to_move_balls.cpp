class Solution {
public:
    vector<int> minOperations(string boxes) {
        int size=boxes.size();
        vector<int> nums(size,0);
        int sum1=0;
        for(int i=0;i<size;i++){
            if(boxes[i]=='1'){
                for(int j=0;j<size;j++){
                    nums[j]+=(i>j)?i-j:j-i;
                }
            }
        }
        return nums;
    }
};