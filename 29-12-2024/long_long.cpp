#include<bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int op=0;
        long long sum=0;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=abs(arr[i]);
        }
        for(int i=0;i<n;){
            if(arr[i]<0){
                while(arr[i]<=0) i++;
                op++;
            }
            else i++;
        }
        cout<<sum<<" "<<op<<endl;
    }
    return 0;
}