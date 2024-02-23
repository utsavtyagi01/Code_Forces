#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min=INT16_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<min)
            min=a[i];
        }
        if(a[0]!=min)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
    
    
}
