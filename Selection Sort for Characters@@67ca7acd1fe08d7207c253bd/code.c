selectionSort(char arr[],int n){
    int i,j,temp;
    int swapped;
    for(int i=0;i<n-1;i++){
        swapped =0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
}
printArray(char arr[n],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}