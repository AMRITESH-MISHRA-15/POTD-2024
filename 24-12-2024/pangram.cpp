#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[26]={0};
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        if(x<91) arr[x%65]++;
        else arr[x%97]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}