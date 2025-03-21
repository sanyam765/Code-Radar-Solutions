int findUnsortedSubarray(int arr[],int n){
   
    int i,j,temp;
    int swapped;
    for(int i=0;i<n-1;i++){
         int count = 0;
        int swapped = 0;
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
            swapped=1;
            
        }
       if(swapped==0){
            break;
        }  
    }
   
            return count;
        
}