#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;
#define ll long long

//alternate walo ka difference 1 aaye toh humesha less rahega 2 se le kar n-1 tak

void permu(){
ll t; cin>>t;
while(t--){
	int n; cin>>n;
	vector<int> v(n);
	int c=1;
	for(int i=0; i<n; i+=2){
		v[i]=c;
		c++;
	}
	c=n;
	for(int i=1; i<n; i+=2){
		v[i]=c;
		c--;
	}
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
cout<<endl;
}
}

int main() {
	permu();
}