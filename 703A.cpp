#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

void game(){
int t, m_win=0, c_win=0;
 cin>>t;
 while(t--){
  int m,c;
  cin>>m>>c;
  if(m>c) m_win++;
  else if(m<c) c_win++;
 }
 if(m_win>c_win) cout<<"Mishka"<<endl;
 else if(m_win==c_win) cout<<"Friendship is magic!^^"<<endl;
 else cout<<"Chris"<<endl;
}

int main(){
//cleancode practice starts henceforth
 game();
 return 0;
}