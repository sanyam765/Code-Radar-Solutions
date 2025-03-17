#include<stdio.h>
int isprime(int b){
    for(int i=2;i<=b-1;i++){
        if(i%2!=0){
            return 1
            break;
        }
        else{
            return 0
            break;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int b;
    for(int i=1;i<=n;i++){
        
        scanf("%d",&b);
        isprime(b);
    }

    return 0;
}