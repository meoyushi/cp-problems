//failed
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

    int m, n;
    cin>>n>>m;
    string a, b;
    cin>>a;
    cin>>b;
    int ans=0;
    int step=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i]==a[j]) step++;
            
            if(step==1){
                for(int k=i; k<m; k++){
                    for(int l=j; l<n; l++){
                       if(b[k]!= a[l]) ans++;
                    }
               }
           } 
        }
        
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
  cout<<ans<<endl;

    
    }
    }
    }
    return 0;
}