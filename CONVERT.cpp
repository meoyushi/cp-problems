#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include <unordered_map>
#include <cassert>
#include<cstring>
using namespace std;

#define ll long long

ll minSwaps(const string& S, const string& T){
    ll n = S.size();
    vector<ll> pos[2]; 
    
    for (ll i = 0; i < n; ++i){
        if (S[i] == '0') pos[0].push_back(i);
        else pos[1].push_back(i);
    }
    vector<ll> want_pos[2]; 
    for (ll i = 0; i < n; ++i) {
        if (T[i] == '0') want_pos[0].push_back(i);
        else want_pos[1].push_back(i);
    }
    
    ll swaps = 0;
    for (ll i = 0; i < 2; ++i) {
        vector<ll>& v1= pos[i];
        vector<ll>& v2= want_pos[i];
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        // Calculate the number of swaps needed
        for (size_t j = 0; j < v1.size(); ++j) {
            swaps += abs(v1[j] - v2[j]);
        }
    }
    
    // Each swap fixes 2 positions, so the number of swaps must be halved
    return swaps / 2;
}

bool exact_kswaps(const string& S, const string& T, ll k) {
    ll n = S.size();
    
    // Check if S and T are permutations of each other
    // cmon learn maps by heart now
    unordered_map<char, ll> countS, countT;
    
    for (char c:S) countS[c]++;
    for (char c:T) countT[c]++;
    
    if (countS!=countT) return false;
    
    ll mini=minSwaps(S, T);
    
    // Check if K is at least minSwapsNeeded and (K - minSwapsNeeded) is even ,...... is in boolean
    return (k>=mini) && ((k-mini)%2==0);
}


void convert(){
ll T; cin>>T; while(T--){
        ll n,k;
        cin>>n>>k;
        string s;
        string t;
        cin>>s;
        cin>>t;
        if(exact_kswaps(s,t,k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    convert();
    return 0;
}