int n;
scanf("%d",&n);
int arr[n];
int min = arr[0];
int max = arr[0];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<=n;i++){
    if(max<arr[i]){
        max = arr[i];
    }
    else if(min>arr[i]){
        min = arr[i];
    }
}
printf("%d %d",max,min);