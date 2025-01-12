#include<bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    int n,k;
    int ans=0;
    cin>>n>>k;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=val&&arr[i]!=0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}