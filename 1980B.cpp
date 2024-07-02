#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void y_n_maybe(){
int t;
 cin>>t;
 while(t--){
    int n,f,k, b=0, c=0;
    cin>>n>>f>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(i==(f-1)){
            b=a[f-1];
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==b){
            c++;
        }
    }
    sort(a, a + n, greater<int>()); 
    int p= k-1;
    if(a[p]==b && c>1){
        if(a[p+1]!=b || p+1>n-1) cout<<"YES"<<endl;
        else cout<<"MAYBE"<<endl;
    }
    else if(a[p]==b && c==1) cout<<"YES"<<endl;
    else if(a[p]<b) cout<<"YES"<<endl;
    else if(a[p]>b) cout<<"NO"<<endl;
 }
}

int main(){
//cleancode practice starts henceforth
 y_n_maybe();
 return 0;
}