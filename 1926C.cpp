#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

#define ll long long

int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll multiplier= n/9;
    int r=n%9;
    int sum;
    for(int i=1; i<r+1; i++){
        sum+=i;
    }
    ll answer;
    answer = (45*multiplier)+sum;
    cout<<answer<<endl;
   }
    return 0;
}