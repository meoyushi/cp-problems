#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
//cleancode practice starts henceforth
 string s;
 cin>>s;
 int n_s;
 n_s=size(s);
 int c_1=0, c_2=0, c_3=0;
 for(int s_i=0; s_i<n_s; s_i++){
    if(s[s_i]=='1') c_1++;
    else if(s[s_i]=='2') c_2++;
    else if(s[s_i]=='3') c_3++;
 }
 int m=n_s-1;
cout<<1;
 return 0;
}