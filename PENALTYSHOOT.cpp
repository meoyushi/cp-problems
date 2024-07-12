#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

void penaltyshoot(){
 int t;
 cin>>t;
 while(t--){
    int x, y;
    cin>>x>>y;
    if(x==y || (x+1)==y || (x+2)==y || x==(y+1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
}

int main() {
	penaltyshoot();
}
