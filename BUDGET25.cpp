#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;


#define ll long long
 
 void budget25(){
  ll t;
  cin>>t;
  while(t--){
  ll n, x;
  cin>>n>>x;
  vector<ll> vec(n);
  ll summation=0;
  for(ll i=0; i<n; i++){
    cin>>vec[i];
    summation=summation+vec[i];
  }
  int ans=summation/x;
  cout<<ans<<endl;
 }}


int main(){
    budget25();
    return 0;
}