#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
//cleancode practice starts henceforth
 string s, t, ans;
 cin>>s;
 cin>>t;
 for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == t[i])
        {
            ans[i] = '0';
        }
        else
        {
            ans[i] = '1';
        }
        cout<<ans[i];
    }
    
 return 0;
}