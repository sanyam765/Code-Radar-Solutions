#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int max = arr[0];
    for(int i=0;i<n;i++){
        if( max<arr[i]){
            if(max%2==0){
            max = arr[i];
            break;
            }
        }

    }
    if(max%2==0){
        printf("%d",max);
    }
    else{
        printf("-1");
    }
}