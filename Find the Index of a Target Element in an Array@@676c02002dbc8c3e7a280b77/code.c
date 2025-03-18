#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    int idx = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            idx = i;
            break;
        }
        else{
            idx = -1;
            break;
        }
    }
    printf("%d",idx);

















    return 0;
}