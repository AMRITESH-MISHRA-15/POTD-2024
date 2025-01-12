    bool comparator(const pair<int,int>& a,const pair<int,int>& b){
        if(a.first==b.first)return a.second>b.second;
        return a.first<b.first;
    }
class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        vector<pair<int,int>> train;
        for(int i=0;i<arr.size();i++){
            train.emplace_back(arr[i],1);
            train.emplace_back(dep[i],-1);
        }
        sort(train.begin(),train.end(),comparator);
        // for(int i=1;i<train.size();i++){
        //   if (train[i].first==train[i-1].first){
        //       if(train[i].second>train[i-1].second){
        //           swap(train[i].second,train[i-1].second);
        //       }
        //   }
        // }
        int mx=0,ans=0;
        for(int i=0;i<train.size();i++){
            ans+=train[i].second;
            mx=max(mx,ans);
        }
        return mx;  
    }
};