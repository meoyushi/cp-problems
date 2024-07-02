//solution of 1977a {these got interchanged}

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void y_n(){
 int t;
 cin>>t;
 while(t--){
 int n,m;
 cin>>n>>m;
 if(n>=m && (n%2)==(m%2))
  cout<<"yes"<<endl;
else cout<<"no"<<endl;
 }
}

int main(){
//cleancode practice starts henceforth
 y_n();
 return 0;
}