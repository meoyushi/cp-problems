#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;


#define ll long long
 
void nowinner(){
    ll t; cin>>t;
    while(t--){
        int a, b, c, m;
        cin>>a>>b>>c>>m;
        int counter = 0;
       
        if(((a+m>=b) && (a<b))  || ((a<c) && (a+m>=c)) || ((b<a) && (b+m>=a)) || ((b<c) && (b+m>=c)) || ((c<b)&&(c+m>=b)) || ((c<a)&&(c+m>=a)) || a==b || b==c || c==a) counter=1;
        

        if(counter==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
}

 int main(){
    nowinner();
    return 0;
 }