#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

void no_of_groups(){
 int n;
 int groups = 1;
 cin>>n;
 int magnets[n];
 for(int i=0; i<n; i++){
    cin>>magnets[i];
 }
 for(int i=0; i<n-1; i++){
 if(magnets[i]!=magnets[i+1]) groups++;
 }
 cout<<groups<<endl;
}

using namespace std;

int main(){
 no_of_groups();
 return 0;
}