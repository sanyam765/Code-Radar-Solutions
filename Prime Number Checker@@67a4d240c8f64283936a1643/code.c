#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("The output is %d\n",isPrime);
    }



    return 0;
}
int isPrime(int b){
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