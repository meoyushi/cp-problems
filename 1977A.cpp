//solution of 1931b {these got interchanged}

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;



int main(){
//cleancode practice starts henceforth
 
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  int long long sum=0, a[n];
  for(int i=0; i<n; i++){
    int a[i];
    cin>>a[i];
    sum+=a[i];
  }
  int k=sum/n;
  for(int i=0; i<n-1; i++){
    if(a[i]<k){
       cout<<"NO"<<endl;
       break;
  }
  else {
    a[i+1] += a[i]-k; //excess
    a[i]=k;
 }
 cout<<"YES"<<endl;
  }
 }
 return 0;
}