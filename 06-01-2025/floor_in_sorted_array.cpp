class Solution {
  public:

    int findFloor(vector<int>& arr, int k) {

        // Your code here
        int idx=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=k){
                idx=i;
            }
            else break;
        }
        return idx;
    }
};