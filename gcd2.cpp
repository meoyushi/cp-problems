#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void construct_matrix(int n,int m){
    vector<vector<int> > matrix(n,vector<int>(m,2)); //sabko 2

    for(int i=0;i<n;i++){
        matrix[i][(i+1)%m]=3; // cyclic me 3 kar denge
    }
    int lol=0;
    for(int i=0; i<n; i++){
        if(matrix[i][0]==3){
            lol++;
        }
        if(lol==0){
            matrix[n-1][0]=3;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        construct_matrix(n,m);
    }
    return 0;
}
