#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long

vector<int> sieve_algo(ll z) {
    vector<bool> isPrime(z+1,true);
    isPrime[0]=isPrime[1]=false; 
    for(int i=2;i*i<=z;i++) {
        if(isPrime[i]) {
            for(int j=i*i;j<=z;j=j+i) {
                isPrime[j]=false; //multiple play
            }
        }
    }
    vector<int> primes;
    for(int i=2;i<=z;i++) {
        if(isPrime[i]) {
            primes.push_back(i); // Collect all prime numbers
        }
    }
    return primes;
}

void gcd1(){
    int n, m;
    cin>>n>>m;

    ll z = 1000000; 
    vector<int> primes = sieve_algo(z);

    int primeCount = primes.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (i*m + j<primeCount){
                cout<<primes[(i*m)+j]<<" "; 
            }
        }
        cout<<endl;
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        gcd1();
    }
}