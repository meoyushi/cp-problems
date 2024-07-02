#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
 int n,h;
 cin>>n>>h;
 int width=0;
 for(int frnd_no=0; frnd_no<n; frnd_no++)
 {
    int a;
    cin>>a;
    if(a<=h) width=width+1;
    else width=width+2;
 }
cout<<width<<endl;
 return 0;
}