#include<iostream>
using namespace std;

int main() {
	int long long t;
	cin>>t;
	while(t--){
	    int long long n;
	    cin>>n;
	    int long long coco=0;
	    for(int i=0; i<n; i++){
	        int a; cin>>a;
	       if(a=='2') coco++;
	    }
	    cout<<coco<<endl;
	    if(coco%8==0) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	    
	}
	    
return 0;
}

