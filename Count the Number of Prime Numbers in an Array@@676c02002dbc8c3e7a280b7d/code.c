#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=2;i<=n-1;i++){
        if(arr[i]%i==0){
            printf("");
        }
        else{
            count++;
        }
    }
    printf("%d",count);
}