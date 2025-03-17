#include<stdio.h>
int isprime(int b){
    if(b<=1){
        return 0;
    }
    if(b==1){
        return 1;
    }
    for(int i=2;i<=b-1;i++){
        if(b%i==0){
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int b;
    for(int i=1;i<=n;i++){
        
        scanf("%d",&b);
        int hello=isprime(b);
        printf("The output is %d\n",hello);
    }


    return 0;
}