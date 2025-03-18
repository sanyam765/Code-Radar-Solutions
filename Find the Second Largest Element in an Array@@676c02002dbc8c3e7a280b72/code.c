#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int smax = -2147483648;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    
    for(int i=0;i<n;i++){
        if(max!=arr[i] && smax<arr[i]){
            smax=arr[i];
        }
    }
    if(max!=smax && smax!=-2147483648){
        printf("%d",smax);
    }
  
    else{
        printf("-1");
    }





    return 0;
}