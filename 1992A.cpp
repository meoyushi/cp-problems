#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

#define ll long long

int main(){
    int t; cin>>t; while(t--){
        int a, b, c;
        cin>>a>>b>>c;


        int counter = 5;
        while (counter--) {
            if(a<=b && a<=c) a++;
            else if(b<=a && b<=c) b++;
            else c++;
        }

        /*int mini;
        mini=min(a, b);
        mini=min(mini, c);
        int counter=5;
        while(counter--){
            mini++;
            if(mini-1 == a) a=mini;
            if(mini-1 == b) b=mini;
            if(mini-1 == c) c=mini;
            mini=min(mini, a);
            mini=min(mini, b);
            mini=min(mini, c);
        }
        */
        int answer=a*b*c;
        cout<<answer<<endl;

    }
    return 0;
}