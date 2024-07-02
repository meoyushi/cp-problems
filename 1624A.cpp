#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

void solve(){
   int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int mini = INT_MAX; //MAXIMUM VALUE OF INTEGERS SO THAT MIN FN TAKES THE OTHER VALUE
    int maxi = INT_MIN; // MINIMUM VALUE OF INTEGERS SO THAT MAX FN TAKES THE OTHER VALUE
    for (int i = 0; i < n; i++) {
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }
    cout<<maxi-mini<<endl;
}

int main(){
//cleancode practice starts henceforth
 int long long t;
 cin>>t;
 while(t--){
   solve();
 }
 return 0;
}