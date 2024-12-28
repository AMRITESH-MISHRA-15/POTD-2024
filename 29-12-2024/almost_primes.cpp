#include<bits/stdc++.h>
using namespace std;

bool isalmost(int n){
    if(n==1) return 0;
    int i=2,count=0;
    while(n>1){
        bool flag=false;
        while(n%i==0){
            n/=i;
            flag=true;
        }
        if(flag==true) count++;
        if(count>2) return 0;
        i++; 
    }
    if(count==2) return 1;
    return 0;
}

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr); std::cout.tie(nullptr);
    int t,count=0;
    cin >> t;
    for(int i=1;i<=t;i++){
        if(isalmost(i)) count++;
    }
    cout<<count<<endl;
    return 0;
}