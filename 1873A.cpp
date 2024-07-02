#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>


using namespace std;

int main(){

 int t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    if(s =="bca"){
      cout<<"NO"<<endl;
    }
    else if(s =="cab") cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

 }
 return 0;
}