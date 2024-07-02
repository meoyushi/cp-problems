#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void discookie(){
int T;
    cin>>T;
    while(T--){
        int n, m;
        cin>>n>>m;
        if(n>m) cout<<n-m<<endl;
        else{
            if(m%n==0) cout<<'0'<<endl;
            else{
                int cookie_var_1 = m%n;
                int cookie_var_2 = n-cookie_var_1;
                int ans=min(cookie_var_1,cookie_var_2);
                cout<<ans<<endl;
            }
        }

    }
}

int main() {
	// your code goes here
    discookie();
 return 0;
}
