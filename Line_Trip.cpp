/* 
So actually in this code we were supposed to find the minimum capacity of the tanker of the car.
So in order to find out, we were required to find out the maximum distance it has to cover between two successive fuel stations so that it can have the minimum number of fuel.
*/


#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min;
        min= a[0]-0;
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])>min){
                min=a[i]-a[i-1];
            }
        }
        if(2*(x-a[n-1])>min)
        min=2*(x-a[n-1]);
        cout<<min<<endl;
    }
    return 0;
}
