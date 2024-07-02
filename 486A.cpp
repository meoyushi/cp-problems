#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

/* FAILED ATTEMPT
void fn(){
int long long n, sum=0;
cin>>n;
for(int long long i_n=1; i_n<=n; i_n++){
    int a = pow(-1,i_n);
    sum+=a*i_n;
}
cout<<sum<<endl;
}

int main(){
//cleancode practice starts henceforth
 fn();
 return 0;
}
*/
/* 2ND FAILED ATTEMPT
#define ll long long

int fu(ll n)
{
    int fn;
    if(n%2==0){
        fn= n/2;
    }
    else{
        fn= -1*(n+1)/2;
    }
    return fn;
    
}

int main(){
    ll n, fn=0;
    cin>>n;
    fu(n);
    return 0;
}
*/

#define ll long long

void fu(ll n)
{
    int fn;
    if(n%2==0){
        fn= n/2;
    }
    else{
        fn= -1*(n+1)/2;
    }
    cout<<fn<<endl;
    
}

int main(){
    ll n, fn=0;
    cin>>n;
    fu(n);
}