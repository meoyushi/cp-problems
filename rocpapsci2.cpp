#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){

    
int long long t;
cin>>t;
while(t--){
    
    int long long n;
    cin>>n;
    string a;
    cin>>a;
    int max_game=0;
    if(n==1)
    {
        max_game = 1;
    }
    for(int a_i=0; a_i<n-1; a_i++)
    {
        if(a[a_i] != a[a_i +1])
        {
            max_game++;
        }
        if(max_game==n-2)
        {
            max_game++;
        }
    }
    
    for(int a_i=0; a_i<n-2; a_i++)
    {
        if(a[a_i]==a[a_i + 1] && a[a_i + 1]==a[a_i + 2])
        {
            max_game++;
        }

    }
    cout<<max_game<<endl;
 }
 return 0;
}