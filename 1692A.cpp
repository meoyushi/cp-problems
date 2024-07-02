#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
//cleancode practice starts henceforth
    
int long long t;
cin>>t;
while(t--){
    
    int long long a, b, c, d;
    cin>>a>>b>>c>>d;
    int people=0;
    if(b>a) people++;
    if(c>a) people++;
    if(d>a) people++;

    cout<<people<<endl;

 }
 return 0;
}