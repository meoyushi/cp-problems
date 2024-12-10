#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long


void rectanglearea(){
    int n;
    ll area;
        cin>>n;
        if(n<4) area=0;
        else if(n%2==0){
            int k=n/2;
            area=k*k/4;
        }
        else{
            int k=(n-1)/2;
            area=k*k/4;
        }
        cout<<area<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        rectanglearea();
    }
    return 0;
}