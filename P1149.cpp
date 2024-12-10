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
    int y, x, k;
    cin>>x>>y>>k;
    int a=max(x,y);
    int b=min(x,y);
    if(a-b<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}

int main() {
	fn();
}