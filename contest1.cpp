#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){

    
int long long t;
cin>>t;
while(t--){
    
   int long long x;
   int y;
   cin>>x>>y;
   int amount=x;
   for(int years=1; years<=y; years++)
   {
     int long long compare =0;
     compare = max(amount+1000, 2*amount);
     amount = compare;
   }
   cout<<amount<<endl;
 }
 return 0;
}