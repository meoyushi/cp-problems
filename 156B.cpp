#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long

void fn(){
    int n;
    cin>>n;
    vector <int> q(n);
    for(int i=0; i<n; i++){
        cin>>q[i];
    }

    int ans=n;
    int x=q[n-1];
    for(int i=n-2; i>=0; i--){
        if(q[i]<=(x/2)){
            ans--;
        }
        else break;
    }

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        fn();
    }
    return 0;
}