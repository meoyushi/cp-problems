
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
int main()
{
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> s(n);
    vector<int> t(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
        t[i]=s[i];
    }
    sort(t.begin(), t.end(), greater<int>());
    for(int j=0; j<n; j++){
        if(s[j]!=t[0]) cout<<s[j]-t[0]<<" ";
        else cout<<s[j]-t[1]<<" ";

    }
    cout<<endl;
  }
    return 0;

}