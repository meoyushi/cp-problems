#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n, counter=0;
    cin>>n;
    
    vector<int> a(n);
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(a[i]<=i+1){
            counter=1; 
        }
    }

    if(counter==0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
return 0;
}
