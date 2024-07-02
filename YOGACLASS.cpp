#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
void yc(){
    int t; cin>>t; while(t--){
        int n, x, y;
        cin>>n>>x>>y;
        int xi=2*x;
        int ans;
        if(xi>=y){
            ans=n*x;
        }
        else{
            ans=(x*(n%2))+((n/2)*y);
        }
        cout<<ans<<endl;

    }
}

int main() {
	// your code goes here
    yc();
    return 0;
}
