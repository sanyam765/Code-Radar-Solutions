int n;
scanf("%d",&n);
int arr[n];
for(int i=1;i<=n;i++){
    scanf("%d",&arr[i]);
}
int evecount=0;
int oddcount=0;
for(int i=1;i<=n;i++){
    if(arr[i]%2==0){
        evecount++;
    }
    else{
        oddcount++;
    }
}
printf("%d %d",evecount,oddcount);