#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,k,ans=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if((i*(i+1)/2)<=((240-k)/5)){
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}
