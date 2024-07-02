//hidden testcase problem, didnt understand the question in the first place

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void min_problem(){
int t;
 cin>>t;
 while(t--){
    int n,m, a=0, b=0, c=0, d=0, e=0, f=0, g=0;
    cin>>n>>m;
    string A;
    cin>>A;
    for(int i=0; i<n; i++){
        if(A[i] == 'A') a=1;
        else if(A[i] == 'B') b=1;
        else if(A[i] == 'C') c=1;
        else if(A[i] == 'D') d=1;
        else if(A[i] == 'E') e=1;
        else if(A[i] == 'F') f=1;
        else if(A[i] == 'G') g=1;
    }
    int counter =0;
    int answer;
    if(a==0) counter++;
    if(b==0) counter++;
    if(c==0) counter++;
    if(d==0) counter++;
    if(e==0) counter++;
    if(f==0) counter++;
    if(g==0) counter++;

    int vari;
    vari= (n*m -(n))/m;
    answer=max(vari,counter);
    cout<<answer<<endl;
 }
}

int main(){
//cleancode practice starts henceforth
 min_problem();
 return 0;
}