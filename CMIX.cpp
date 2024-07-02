#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;



int main(){
//cleancode practice starts henceforth
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int v[n], a[n];
    int vmax1=0, amax2=0, a1=0, v2=0;
    for(int i=0; i<n; i++){
        cin>>v[i]>>a[i];
        if(v[i]>=vmax1){
            vmax1=v[i];
            a1=a[i];
        }
        if(a[i]>=amax2 && a[i]!=a1){
            amax2=a[i];
            v2=v[i];
        }
    }
    
    int max_strength= vmax1*amax2 + v2*a1;
    cout<<max_strength<<endl;

 }
 return 0;
}