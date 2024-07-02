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
    int max_games = n;
    int samegame = 1;
    for(int a_i=0; a_i<n-1; a_i++)
    {
        if(a[a_i] == a[a_i +1])
        {
            samegame++;
        }
    }
    if(samegame%2 == 0 || n==1)
    {
        max_games= n - samegame/2;
    }
    else 
    {
        max_games = n + 1 - samegame/2;
    }
    cout<<max_games<<endl;
   
 }
 return 0;
}