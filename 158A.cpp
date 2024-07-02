#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void next_round(){
 int n, k, lolo;
   cin>>n>>k;
   vector<int> a(n);
   for(int a_i=0; a_i<n; a_i++){
    cin>>a[a_i];
   }
   lolo=a[k-1];
   int ans=0;
   for(int a_i=0; a_i<n; a_i++){
    if(a[a_i]>=lolo && a[a_i]>0) ans++;
   }
   cout<<ans<<endl;
}

int main() {
	// your code goes here
   next_round();
 return 0;
}