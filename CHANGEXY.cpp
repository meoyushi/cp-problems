//unsolved yet
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	
    int long long t;
    cin>>t;
    while(t--){
       int long long a, b, k, d;
       cin>>a>>b>>k;
       double c=0;
       d=a;
       if(a==1){
        while(a!=b){
            if(a*k>=a+1){
                a=a*k;
                c++;
            }
            else{
                a=a+b-d;
                c=c+b-d;
            }
            
        }
       }
       else{
        c = double((b - (b%a))/a);
       }

       cout<<c<<endl;
    }
 return 0;
}