#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k)
            count=1;
        }
        if(count)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
    
    
}
