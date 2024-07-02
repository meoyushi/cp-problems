//star problem
//cleancode practice starts henceforth

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;
 
void solve(){
    int n;
    cin >> n;
    string s;
    string mini = "zzz";
    int c = 26;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < c; j++){
            for(int k = 0; k < c; k++){
                if(i + j + k == n - 3){
                    s = s+char(i + 'a');
                    s = s+char(j + 'a');
                    s = s+char(k + 'a');
                    mini = min(s, mini);
                }
            }
        }
    }
    cout<<mini<<endl;
 
}
int main(){
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}