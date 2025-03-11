#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int con = 1;
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]!=arr[i+1] && i<n-1){
            cond = 0;
        }
    }
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    
    }
    if(n == 1 || con == 1){
        printf('-1');
    }
    else{
    printf("%d",smax);}







    return 0;
}