#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;


#define ll long long
 
void knockout(){
    ll t; cin>>t;
    while(t--){
        vector<int> v1(16);
        vector<int> v2(16);
        for(int i=0; i<16; i++){
            cin>>v1[i];
            v2[i]=v1[i];
        }
        
        sort(v2.begin(),v2.end());
        vector<int>v3(16);
        for(int i=0; i<16; i++){
            {
                //double loop for checking which element of v1 matches with v2, n save the index of v2 positioning, but it gave segsigv
                auto p=find(v2.begin(),v2.end(),v1[i]);
                //auto koi bhi datatype accept kar leta hai
                //find wala double loop ka kaam karega
                int j=p-v2.begin();    
                if(j==15) v3[i]=4;
                else if(j>=7 && j<=14) v3[i]=3;
                else if(j>=3 && j<=6) v3[i]=2;
                else if(j<=2 && j>=1) v3[i]=1;
                else v3[i]=0;
            }
        }
        for(int i=0; i<16; i++){
            cout<<v3[i]<<" ";
        }
        cout<<endl;
    }
}
 int main(){
    knockout();
    return 0;
 }