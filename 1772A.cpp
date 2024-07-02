#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

void add(){
    int a, b;
    cin>>a>>b;
    cout<<a+b<<endl;
}

int main(){
//cleancode practice starts henceforth
 int t;
 cin>>t;
 while(t--){
   add();
 }
 return 0;
}