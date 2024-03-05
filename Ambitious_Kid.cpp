#include<iostream>
#include<algorithm>
#include <cstdlib>
#include<limits.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            if(arr[i]<min)
            min=arr[i];
        }
        else{
            if(abs(arr[i])<min)
            min=abs(arr[i]);
        }
    }
    cout<<min;

    return 0;
    
    
}

