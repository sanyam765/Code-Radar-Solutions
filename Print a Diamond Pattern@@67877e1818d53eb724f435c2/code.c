#include <stdio.h>



int main() {
 int n;
 scanf("%d",&n);
 int nst = 1;
 int nsp = 3;
 int ml = (n*2)-1;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=nsp;j++){
        printf(" ");
    }
    for(int k=1;k<=nst;k++){
        printf("*");
    }
    printf("\n");
     if(i<ml){
    nsp--;
    nst = nst + 2;
 }
 else{
    nst = nst -2;
    nsp++;
 }
 }

}