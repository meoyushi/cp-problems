#include <iostream>
#include <vector>

using namespace std;

#define ll long long

void gmgm() {
    ll t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int anscounter = 0;
        
        bool close=true; 

        for (int i=0; i<n; i++) {
            bool isCloseRangeTarget = (a[i]<=d);
            if (close!=isCloseRangeTarget) {
                
                anscounter++;
                close=isCloseRangeTarget;
            }
        }

        cout<<anscounter<<endl;
    }
}

int main() {
    gmgm();
    return 0;
}
