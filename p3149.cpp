#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
#define ll long long


void fn(){
int t; cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int minus=0, plus=0;
    /*for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>0) plus++;
        else minus++;
    }
    int ans=0;
    if(plus==n || minus==n){
     ans=0;
    }
    else{
    int minn=min(plus, minus);
    ans=minn;
    }
    cout<<ans<<endl;*/
    int index1=INT_MAX, index2=INT_MIN;
    for(int i=0; i<n; i++){
       cin>>a[i];
       if(a[i]>0){
        index1=min(i,index1);
       }
    }
    for(int i=n-1; i>=0; i--){
       if(a[i]>0){
         index2=max(index2, i);
       }
    }
    int count =0 ;
    for(int i=index1; i<=index2; i++){
        if(a[i]<0) count++;
    }
    cout<<count<<endl;
}}

int main() {
	fn();
}