#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

#define ll long long 
#define vi(v,n) for(ll i=0;i<n;i++) cin>>v[i]
#define pb push_back

void angrymonk(){
    ll n,k,s=0;
    cin>>n>>k;
    
    vector<ll>v(k);
    vi(v,k);
    sort(v.begin(),v.end());
    
    for(int i=0;i<k-1;i++){
        if(v[i]==1) s++;
        else{
            s+=(v[i]-1+v[i]);
        } 
    }
    cout<<s<<"\n";

}
int main(){
    int t;
    cin>>t;
    while(t--){
        angrymonk();
    }
    return 0;
}