#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int maj = arr[0];
    for(int i=0;i<n;i++){
        int k = 1;
        if(arr[i]==arr[i+k]){
            int maj = arr[i];
        }
        else if(arr[i]!=arr[i+k]){
            int maj = -1;
        }
        k++;
        
        
    }
    printf("%d",maj);
    



    return 0;
}