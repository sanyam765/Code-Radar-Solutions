int findUnsortedSubarray(int arr[],int n){
   
    int i,j,temp;
    int swapped;
    int count = 0;
    for(int i=0;i<n-1;i++){
         
        int swapped = 0;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]= temp;
            swapped=1;
            
        }
    }
       if(swapped==0){
            break;
        }  
    }
   
            return count;
        
}