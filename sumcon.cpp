#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

#define ll long long 
#define vecy(v,n) for(int i=0;i<n;i++) cin>>v[i]


void fn(){
    int n;
    cin>>n;
    vector<int>v(n);
    vecy(v, n);

    int count8=0;
    int i=0;
    while(i<n) {
        if(v[i] == 8)count8++;
        i++;
    
    }

    int nana=count8*11;
    int ans;
    if(nana>=n){
        ans=n/11;
    }
    else{
        ans=count8;
    }

    cout<<ans<<endl;
}

int main(){

    fn();
    return 0;
}