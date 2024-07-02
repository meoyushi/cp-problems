#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

#define ll long long
void fn(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    if(n==1) cout<<a[0]<<"\n";
    
    else{
        ll x=0;
        for(int i=0;i<n;i++) x=x^a[i];
        
        if(x==0) cout<<"0"<<endl;
        else{
            ll b=0;
            for(int i=0;i<n;i++){
                b=b^(a[i]^x);
            }
            (b==0)?(cout<<x<<endl):(cout<<"-1"<<endl);
        }
    }}
}
 
int main(){
    fn();
    return 0;
}
