#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--){
       int x, y;
       cin>>x>>y;
       int a=x%3;
       int b=y%3;
       int maxi=max(a,b);
       cout<<maxi<<endl;

    }
 return 0;
}