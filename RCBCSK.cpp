#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int x, y;
    cin>>x>>y;
    if(y>=x) cout<<"CSK"<<endl;
    else{
        int c;
        c=x-y;
        if(c>=18) cout<<"RCB"<<endl;
        else cout<<"CSK"<<endl;
    }
 return 0;
}