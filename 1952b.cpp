


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
    string word;
    int yes =0;
    cin>>word;
    int no_of_letters;
    no_of_letters = sizeof(word);
    while(no_of_letters--)
    {
      if(word[no_of_letters]=='t' && word[no_of_letters - 1]=='i') 
      {
        yes = 1;
      }
    }
    if(yes==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
 return 0;
}