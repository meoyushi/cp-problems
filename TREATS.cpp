#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int treats(int t){
while(t--){
    long long n; int ans=0; int m;
    cin>>n>>m;
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((a[i]+b[j])%m==0) ans++;
        }
    }
    cout<<ans<<endl;
}
}

int main() {
	// your code goes here
long long t;
cin>>t;
treats(t);
return 0;
}