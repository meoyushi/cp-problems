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
    int a, b, x;
    cin>>a>>b>>x;
    int c=x*x;
    int ans=0;
    if(c>=(a*b)) ans=0;
    else{
        int min=(a,b);
        if((1*min)<c) ans=1;
        else ans=2;
    }
    cout<<ans<<endl;
}
}

int main() {
	fn();
}