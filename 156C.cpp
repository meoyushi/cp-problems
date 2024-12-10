#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long


void fn(){
int n;
cin>>n;
vector <int> arr(n);
int odd=0;
int even=0;

for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i]%2==0) even++;
    else odd++;
}
int ans=0;
if(odd!=0){
ans= even+1;
}

cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        fn();
    }
    return 0;
}