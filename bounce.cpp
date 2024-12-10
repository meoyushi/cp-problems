#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
#define ll long long

//alternate walo ka difference 1 aaye toh humesha less rahega 2 se le kar n-1 tak

void bounce(){
ll t; cin>>t;
while(t--){
	ll n; cin>>n;
    int answer=0;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) {
        if(v[i]==0){
        int sum1=0;
        int sum2=0;
        for(int j=0; j<i; j++){
            sum1 = sum1+ v[j];
        }
        for(int j=i+1; j<n; j++){
            sum2 = sum2 + v[j];
        }

        if(sum1==sum2) answer=answer+2;
        else if(sum1+1==sum2 || sum2+1==sum1) answer++;
        }
    }
cout<<answer<<endl;
}
}

int main() {
	bounce();
}