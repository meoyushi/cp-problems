#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int yesno(string s, int n){

    int timur[5]= {0,0,0,0,0};
    int booli =0, counter =0;

    for(int s_i =0; s_i<n; s_i++)
    {
      if(s[s_i]=='T') timur[0]++;
      if(s[s_i]=='i') timur[1]++;
      if(s[s_i]=='m') timur[2]++;
      if(s[s_i]=='u') timur[3]++;
      if(s[s_i]=='r') timur[4]++;
    }
    int i=0;
    while(i<5){
        if(timur[i]==1) counter++;
    }
    if(counter==5) booli=1;
    return booli;
}


int main(){

int t;
cin>>t;
while(t--){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int semi;
    semi=yesno(s,n);
    if(semi==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
 return 0;
}