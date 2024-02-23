#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3==0)
        cout<<"Second"<<endl;
        else
        cout<<"First"<<endl;
    }
    return 0;
    
    
}
