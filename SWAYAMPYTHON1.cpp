#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;


#define ll long long
 
 
int main(){
    int x1=0, x2=1, x=44;
    while(x-40){
        int y;
        y= x1*x1 + x2*x2;
        x1=x2;
        x2=y;
    }
    cout<<x2;
    return 0;
}