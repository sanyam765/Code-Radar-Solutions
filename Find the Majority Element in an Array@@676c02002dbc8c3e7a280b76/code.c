#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int maj = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            int maj = arr[i];
        }
    }
    printf("%d",maj);
    



    return 0;
}