#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

#define ll long long

void chefizza(){
 ll t;
 cin>>t;
 while(t--){
   ll x;
   cin>>x;
   int i=0;
   ll counter;
   ll ans;
   while(pow(2, i)< x){
    counter= pow(2, i+1) - x;
    ans=x-counter;
    i++;
   }
   if(pow(2,i)==x) ans=0;
   cout<<ans<<endl;
 }
}

int main() {
	chefizza();
    return 0;
} 
