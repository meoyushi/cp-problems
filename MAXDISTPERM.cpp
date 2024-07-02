#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void maxdistperm(){
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        vector<int> a(n);
        
        for(int i=0; i<n; i++){
            a[i]=i+1;
        }
        
        
        for (int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    
        cout<<a[n-1]<<" ";
        for (int i=0; i<n-1; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

       }
}


int main() {
	// your code goes here
    maxdistperm();
 return 0;
}




