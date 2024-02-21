#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n=0,k=0;
        cin>>n;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0,result[n];
        int i;
        if(k>1)
        cout<<"YES\n";
        else{
            for(i=0;i<n-1;i++){
                result[i]=arr[i];
                if(arr[i]==arr[i+1])
                count++;
            }
            result[i]=arr[i];
            sort(result,result+n);
            int equal = 1;
            for(int i=0;i<n;i++){
                if(result[i]==arr[i])
                continue;
                else{
                    equal=0;
                    break;
                }
            }
            if((count==n-1)||(equal==1))
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
    return 0;
    
    
}
