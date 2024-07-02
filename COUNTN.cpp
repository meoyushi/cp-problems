#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

#define ll long long
using namespace std;

void countn(){
    ll T;
    cin>>T;
    while (T--){
        ll k;
        cin>>k;
        ll sum=0;
        ll multiplier=2;
        while(multiplier<=k){
            sum= sum+ multiplier*k;
            multiplier++;
        }
        cout<<sum<<endl;

     }
}


int main() {
	// your code goes here
    countn();
 return 0;
}




