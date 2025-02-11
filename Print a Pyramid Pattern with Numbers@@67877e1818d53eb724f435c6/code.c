
#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        int nst = 1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("%d ",k);
            nst++;
        }
        printf("\n");
        
    }
   
    return 0;
}