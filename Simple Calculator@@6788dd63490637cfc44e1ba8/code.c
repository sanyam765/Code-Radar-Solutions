#include<stdio.h>
int main(){
    float n,m;
    char ch;
    scanf("%f %f %c",&n,&m,&ch);
    if(ch=='+'){
        printf("%f",n+m);
    }
    else if(ch=='-'){
        printf("%f",n-m);
    }
    else if(ch=='*'){
        printf("%f",n*m);
    }
    else if(ch=='/'){
        if(n==0 || m==0){
            printf("error");
        }
        else{
            printf("%f",n/m);
        }
        
    }

}











    