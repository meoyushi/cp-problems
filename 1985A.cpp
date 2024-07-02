#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void swap_string(){
int t;
cin>>t;
while(t--){
string a, b;
cin>>a>>b;
char swwap;
swwap=a[0];
a[0]=b[0];
b[0]=swwap;

cout<<a<<" "<<b<<endl;
}
}

int main(){
//cleancode practice starts henceforth
swap_string();
 return 0;
}