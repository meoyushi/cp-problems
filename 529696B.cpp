#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void tom_n_contest(){
int n, k;
int ans=0;
cin>>n>>k;
int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
}
for(int i_1=0; i_1<=n/2; i_1++){
    if(array[i_1]<=k) ans++;
    else break;
}
for(int i_1=n; i_1>n/2; i_1--){
    if(array[i_1]<=k) ans++;
    else break;
} 
if((ans-1)<0) cout<<'0'<<endl;
else cout<<ans-1<<endl;
}

int main(){
//cleancode practice starts henceforth
tom_n_contest();
return 0;
}