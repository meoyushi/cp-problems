//failed
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstring>

using namespace std;

#define ll long long

int findMode(int arr[], int size)
{
    int max_Value = 0, max_Count = 0, i, j, c;

    // Iterating through each element in the array
    for (i = size-1; i >= 0; i--)
    {
        int count = 0;

        // Counting occurrences of the current element
        for (j = size-1; j >= 0; j--)
        {
            if (arr[j] == arr[i])
                count++;
                c=j;
        }

        // Updating maxCount and maxValue if current element's count is greater
        if (count >= max_Count)
        {
            max_Count = count;
            max_Value = min(arr[i],arr[c]);
        }
    }
    return max_Value;
}


int main(){
 ll t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int size = sizeof(a) / sizeof(a[0]);
    int mode= findMode(a, size);


    int mini=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        if(a[i]!=mode){
            if(i>maxi) maxi=i;
            if(i<mini || mini==0 ) mini=i;
        }
    }
    
    if(mini==0 && maxi==0){
        cout<<'0'<<endl;
    } 
    else if(maxi-mini-1 == 0) cout<<(maxi-mini+1)*mode<<endl;
    else cout<<(maxi-mini+1)*mode - 1<<endl;

 }
 return 0;
}