#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,value=1;
        string s;
        cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.')
        count++;
        if(i>0&&i<n-1){
            if(s[i-1]=='.'&&s[i]=='.'&&s[i+1]=='.'){
            value=0;
            cout<<2<<endl;
            break;}
        }
       
    }  
        if(value){
         cout<<count<<endl;   
        } 
        
    }
    return 0;
    
    
}
