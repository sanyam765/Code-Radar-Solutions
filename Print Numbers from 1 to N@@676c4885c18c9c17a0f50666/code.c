#include <stdio.h>



int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<=1;i++){
        for(int j=1;j<=i;j++){
            printf("%d ");
        }
        printf("\n");
    }
    return 0;
}