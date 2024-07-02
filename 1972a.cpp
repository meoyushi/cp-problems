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
    
   int n;
   cin>>n;
   vector<int> a;
   vector<int> b;
   for(int i=0; i<n; i++) cin>>a[i];
   for(int i=0; i<n; i++) cin>>b[i];
   int j=0, c=0;
   while(j<n){
    if(a[j]>b[j]){
        a.push_back(b[j]);
        int len = sizeof(a)/sizeof(a[0]);
        sort(a.begin(),a.end());
        c=c+1;
        j++;
    }
   }
   cout<<c<<endl;
 }
 return 0;
}