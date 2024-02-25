#include<iostream>
#include<algorithm>
#include<map>
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
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }

        if(m.size()==1){
            cout<<"YES"<<endl;
        }
        else if(m.size()==2){
            int f=m.begin()->second;
            if(f==(n+1)/2 || f==(n)/2)
            cout<<"YES"<<endl;
            else 
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
    
    
}
