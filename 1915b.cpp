


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
    //attempt-2 (2nd solution)
    char latin_sq[3][3];
    int a=0, b=0, c=0; //counters for the elements, the one having only 2 counter will be printed
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>latin_sq[i][j];

            if(latin_sq[i][j]=='A') a++;
            else if(latin_sq[i][j]=='B') b++;
            else if(latin_sq[i][j]=='C') c++;
        }
    }
    if(a==2) cout<<"A"<<endl;
    else if(b==2) cout<<"B"<<endl;
    else if(c==2) cout<<"C"<<endl;

 }
 return 0;
}