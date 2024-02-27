#include<iostream>
#include<algorithm>
#include <cstdlib>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n-1];
        int count=0;
        for(int i=0;i<n-1;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n-1;i++){
            count+=a[i];
        }
        if(count<0)
        cout<<abs(count)<<endl;
        else
        cout<<count*(-1)<<endl;

    }
    return 0;
    
    
}
