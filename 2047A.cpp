#include <iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

void happydays(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
     cin >> a[i];
    }

    int sum=0, happyDays=0;
    for(int i = 0; i < n; i++) {
     sum=sum+a[i];
     int sqrt_sum = sqrt(sum);
     if(sqrt_sum*sqrt_sum==sum && sqrt_sum % 2==1){
        happyDays++;
     }
    }
    cout<<happyDays<<endl;

}

int main() {
    int t;
    cin>>t;
    while(t--){
        happydays();
    }
    return 0;
}
