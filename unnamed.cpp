#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

#define ll long long
using namespace std;


int main() {
	// your code goes here
   int n, k, lolo;
   cin>>n>>k;
   vector<int> a(n);
   for(int a_i=0; a_i<n; a_i++){
    cin>>a[a_i];
   }
   lolo=a[k-1];
   int ans=0;
   for(int a_i=0; a_i<n; a_i++){
    if(a[a_i]>=lolo && lolo>0) ans++;
   }
   cout<<ans<<endl;
 return 0;
}