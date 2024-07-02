#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	
    int long long t;
    cin>>t;
    while(t--){
        int long long n;
        cin>>n;
        string s;
        cin>>s;
        int changes=1;
        for(int s_i=1; s_i<n; s_i++){
            if(s[s_i-1]!=s[s_i]) changes++;
        }
        int min_operations = changes/2;
        cout<<min_operations<<endl;

    }
 return 0;
}