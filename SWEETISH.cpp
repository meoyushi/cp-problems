#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long

int main(){
    int x, n;
    cin>>x>>n;

    int c= x - n*10;
    cout<<c/20<<endl;
    return 0;
}