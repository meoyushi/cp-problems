#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void max_multiple_sum_number(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int maxi=0, number;
    for(int value=2; value<=n; value++ ){
      int sum=0, i=1;
      int multiple=value;
      while(multiple<=n){
        multiple= value*i;
        sum += multiple;
        i++;
      }
      maxi=max(maxi,sum);
      if(maxi==sum) number=value;
    }
    cout<<number<<endl;
}
}

int main(){
//cleancode practice starts henceforth
 max_multiple_sum_number();
 return 0;
}