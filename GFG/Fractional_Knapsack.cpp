class Solution {
  public:
    // Function to get the maximum total value in the knapsack.
    bool static comp(Item a, Item b){
        double i=(double)a.value/(double)a.weight;
        double j=(double)b.value/(double)b.weight;
        return i>j;
    }
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Your code here
       sort(arr,arr+n,comp);
       double result=0,wt=0;
       for(int i=0;i<n;i++){
           if(wt+(double)arr[i].weight<=w){
               wt+=(double)arr[i].weight;
               result+=(double)arr[i].value;
           }
           else{
               int temp=w-wt;
               result+=(double)((double)arr[i].value/(double)arr[i].weight )* temp;
               break;
           }
       }
       return result;
    }
};
