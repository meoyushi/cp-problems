#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

void _705a(){
int long long n, maxilen=0, maxi=0;
cin>>n;
int long long a=0, b;
while(n--){
    cin>>b;
    if(b>a)
    { 
        maxilen++;
        maxi=max(maxi,maxilen);
    }
    else maxilen=1;
    a=b;
}
cout<<maxi<<endl;
}

int main(){
//cleancode practice starts henceforth
 _705a();
 return 0;
}