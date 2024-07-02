#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

#define ll long long
using namespace std;

void xaxis(){
ll t;
   cin>>t;
   while(t--){
    int a, b, c;
    cin>>a>>b>>c;
    int number;
    if(a>=b && c<=b) number=(a-b)+(b-c);
    else if(c>=b && a<=b) number=(c-b)+(b-a);
    else if(a>=c && b<=c) number=(c-b)+(a-c);
    else if(b>=c && a<=c) number=(c-a)+(b-c);
    else if(c>=a && b<=a) number=(c-a)+(a-b);
    else if(b>=a && c<=a) number=(b-a)+(a-c);
    cout<<number<<endl;

   }
}

int main() {
	// your code goes here
   xaxis();
 return 0;
}


