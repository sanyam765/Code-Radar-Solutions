#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==1){
            a = 1;
            break;
        }
    }
    if(n==1){
        printf("Not Prime");

    }
    else if(a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime")
    }
    return 0;
}