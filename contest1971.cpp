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
    
    int x, y;
    cin>>x;
    cin>>y;
    int mini=min(x,y);
    int maxi=max(x,y);

    cout<<mini<<" "<<maxi<<endl;
 }
 return 0;
}