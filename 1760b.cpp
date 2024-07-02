#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
//cleancode practice starts henceforth
using namespace std;


void solve(){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int max_len = 0;
    for(int s_i=0; s_i<n; s_i++){
        int c = int(s[s_i]) - 96;
        max_len = max(max_len,c);
    }
    cout<<max_len<<endl;
}

int main(){
int long long t;
cin>>t;
while(t--){
    solve();
 }
 return 0;
}