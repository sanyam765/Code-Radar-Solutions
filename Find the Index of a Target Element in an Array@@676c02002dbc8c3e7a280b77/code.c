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
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i]==T){
            idx = i;
            break;
        }
        
    }
    if(idx<=n-1){
    printf("%d",idx);
    }
    else{
        printf("-1");
    }

















    return 0;
}