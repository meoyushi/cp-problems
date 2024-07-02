#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

#define ll long long

using namespace std;

int main(){
//cleancode practice starts henceforth
 ll t;
 cin>>t;
 while(t--){
 ll n;
 cin>>n;
 vector<ll> a(n);
 for(ll a_i=0; a_i<n; a_i++){
    cin>>a[a_i];
 }
 ll answer=0;
 for(ll a_i=0; a_i<n; a_i++){
    ll sum=0; ll maxi;
    for(ll i=0; i<=a_i; i++){
        sum+=a[i];
        maxi=max(maxi,a[i]);
    }
    ll new_sum = sum-maxi;
    if(new_sum==0) answer++;
 }
 cout<<answer<<endl;
 }
 return 0;
}