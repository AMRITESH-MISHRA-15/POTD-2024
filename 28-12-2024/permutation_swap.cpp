#include<bits/stdc++.h>
using namespace std;
 
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
 
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n,val=0,ans=0;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>val;
            val--;
            val=abs(val-i);
            if(val!=0) arr.push_back(val);
        }
        for(int i=0;i<arr.size();i++){
            ans=gcd(ans,arr[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}