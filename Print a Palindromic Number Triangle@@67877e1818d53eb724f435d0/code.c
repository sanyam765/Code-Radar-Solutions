#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int k=1;k<=n;k++){
            printf("%d",i)
        }
        for(int x=1;x<=i-1;x++){
            printf("%d",x-i);
        }
        printf("\n");
    }
}