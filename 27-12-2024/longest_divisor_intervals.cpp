#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin>>n;
        int max=0;
        for(int i=1;i<=n;i++){
            if(n%i==0) max++;
            else break;
        }
        cout<<max<<endl;
    }
    return 0;
}