#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
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
    printf("%d",smax);







    return 0;
}