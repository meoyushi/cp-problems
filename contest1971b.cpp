#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
//cleancode practice starts henceforth
    
int t;
cin>>t;
while(t--){
    
    string s;
    cin>>s;
    int total_letters=s.length();


    int counter=1;
    for(int s_i=1; s_i<=total_letters; s_i++)
    {
        //logic pt1
        if(s[s_i]==s[s_i - 1])
        {
            counter++;
        }
    }
    //logic pt2
    if(counter==total_letters)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        int counter_1=0;
    for(int i=0; i<=total_letters/2; i++)
    {
        if(s[i]==s[total_letters-1-i]) counter_1++;
    }

    if(counter_1==total_letters/2 + 1)
    {
      for(int i=1; i<total_letters; i++)
      {
        cout<<s[i];
      }
      cout<<s[0]<<endl;
    }
    else
    {
        for(int s_j=total_letters; s_j>0; s_j--)
        {
            cout<<s[s_j - 1];
        }
        cout<<endl;
    }
    }
    
 }
 return 0;
}