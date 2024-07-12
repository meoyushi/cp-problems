#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void mintime_ram(){
long long t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans;
        if(n==1) ans=1;
        else if(k==1) ans=n;
        else{
            ans=(n-1)*k + 1;
        }
        cout<<ans<<endl;
    }
}

int main() {
	mintime_ram();
}
