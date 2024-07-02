#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

void hulk(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
    if(i%2==0)
      {
        cout<<"I hate ";
      }
    else cout<<"I love ";

    if(i!=n-1) cout<<"that ";
    else cout<<"it"<<endl;
    }
}

int main(){
//cleancode practice starts henceforth
 hulk();
 return 0;
}