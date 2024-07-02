#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
//cleancode practice starts henceforth
    
int t;
cin>>t;
while(t--){
    int long long number;
    int long long sum;
    cin>>number;
    sum = number;
    while(number != 0)
    {
        number = number/2;
        sum+=number;
    }
    cout<<sum<<endl;
 }
 return 0;
}