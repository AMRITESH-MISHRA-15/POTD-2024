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
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0) c0++;
            else if(x==1) c1++;
        }
        if(c1==0) cout<<"0"<<endl;
        else if(c0==0)cout<<c1<<endl;
        else{
            long long ans=pow(2,c0);
            ans*=c1;
            cout<<ans<<endl;
        }
    }
    return 0;
}