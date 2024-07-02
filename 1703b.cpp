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
    int len_string;
    cin>>len_string;
    
    string string1;
    cin>>string1;
    int balloons = 1;
    for(int i=0; i<len_string; i++)
    {

       if(i==0)
       {
        balloons++;
       }
       else
       {
        int new_problem=1;
        for(int j=0; j<i; j++)
        {
          if(string1[j]==string1[i])
          {
            new_problem=0;
          }
        }
        if(new_problem==1) balloons +=2;
        else balloons++;
       }
    }
    cout<<balloons<<endl;

}
    return 0;
}