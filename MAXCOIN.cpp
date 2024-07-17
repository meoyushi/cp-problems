#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

#define ll long long

void maxcoin(){
int t; cin>>t; while(t--){
        int n, x;
        cin>>n>>x;
        int games_lost= n-x;
        ll sumsub=0;
        for(int i=1; i<=games_lost; i++){
            sumsub=sumsub+pow(2,i);
        }
        ll sumadd=0;
        for(int i=games_lost+1; i<=n; i++){
            sumadd=sumadd+pow(2,i);
        }
        ll ans=sumadd-sumsub;
        cout<<ans<<endl;
    }
}

int main(){
    maxcoin();
    return 0;
}