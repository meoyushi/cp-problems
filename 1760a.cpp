#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
//cleancode practice starts henceforth
using namespace std;

void findmedium(){
    int a, b, c, medium;
    cin>>a>>b>>c;
    if((a>=b && a<=c) || (a<=b && a>=c)) medium = a;
    else if((b>=a && b<=c) || (b<=a && b>=c)) medium = b;
    else medium = c;
    cout<<medium<<endl;
}

int main(){

int long long t;
cin>>t;
while(t--){
    findmedium();
 }
 return 0;
}