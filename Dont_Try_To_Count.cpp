#include <iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,result=0;
        string x,s;
        cin>>n>>m>>x>>s;
        for(int i=0;i<10;i++){
            if(x.find(s)!=string::npos){
            cout<<i<<endl;
            result=1;
            break;
            }
            x=x+x;
        }
        if(result==0)
        cout<<-1<<endl;
        
    }
    return 0;
}
