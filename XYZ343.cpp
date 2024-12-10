#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

#define ll long long
 
 void xyz343(){
  ll t;
  cin>>t;
  while(t--){
  int x, y, z;
  cin>>x>>y>>z;
  ll total=x*y;
  int ans=0;
  while(total>z){
    total=total-y;
    ans++;
  }
  cout<<ans<<endl;
 }}


int main(){
    xyz343();
    return 0;
}