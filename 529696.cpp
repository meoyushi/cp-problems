#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void fn(){
int t;
cin>>t;
while(t--){
    int n; cin>>n;
    string s;
    cin>>s;
    int counter=0;
    for(int s_i=0; s_i<n; s_i++){
        if(s[s_i]=='8' && (n-1-s_i)>=10) {
            counter=1;
        }
    }
    if(counter==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}

int main(){
//cleancode practice starts henceforth
fn();
return 0;
}