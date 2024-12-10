#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
#define ll long long


void balanced(){
int t; cin>>t;
while(t--){
    ll n, k;
    cin>>n>>k;
    vector <ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int count=1, ans=1;
    for(int i = 1; i < n; i++) {
        if(v[i]-v[i-1] > k) {
            count=1;
        } else {
            count++;
        }
        ans = max(ans, count);
    }
    cout<<n-ans<<endl;
}
}

int main() {
	balanced();
}