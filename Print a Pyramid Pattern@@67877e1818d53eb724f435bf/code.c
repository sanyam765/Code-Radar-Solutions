#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
     int nst = 1;
    for(int i=1;i<=n;i=i++){
       
        for(int j=1;j<=n-i;j=j++){
            printf(" ");
        }
        printf("\n");
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        
        printf("\n");
    }
    nst = nst + 2;
    return 0;
}