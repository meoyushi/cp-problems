#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void leastCoins(){
    int n;
    cin>>n;
    long long k;
    cin>>k;
    vector <long long> a(n);
    for(int i = 0; i < n; i++) {
     cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    long long sum=0;
    int i=0;
    while(sum<k && i<n){
     sum=sum+a[i];
     i++;
    }
    if (sum== k) {
        cout << 0 << endl;
    } else {
        cout << k - sum << endl;
    }
    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        leastCoins();
    }
    return 0;
}
