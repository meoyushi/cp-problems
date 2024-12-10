#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

void budget25(){
  ll t;
    cin>>t;

    while(t--) {
        ll n, x;
        cin>>n>>x;

        vector<ll> A(n);
        for(ll i=0; i<n; i++){
            cin>>A[i];
        }

        sort(A.begin(), A.end());

        int count=0;
        for(ll i=0; i<n; i++) {
            if(A[i]>=x) {
                count++;
                x=A[i];
            }
        }
        if(count==0) cout<<count<<endl;
        else cout<<count+1<<endl;
    }


}

int main() {
    budget25();
    return 0;
}
