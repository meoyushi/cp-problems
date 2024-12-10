#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;


#define ll long long
 
 void gmgm(){
    ll t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        int a[n];
        int parity=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int anscounter=0;
        int new_parity;
        for(int i=0; i<n; i++){
            
            if(d>a[i]) new_parity=1;
            else new_parity=0; 
            if(parity!=new_parity) anscounter++;
            parity=new_parity;
        }

        cout<<anscounter<<endl;
    }
 }

int main(){
    gmgm();
    return 0;
}