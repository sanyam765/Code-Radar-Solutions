#include<stdio.h>
int main(){
    int n,m;
    char ch;
    scanf("%d %d %c",&n,&m,&ch);
    if(ch=='+'){
        printf("%d",n+m);
    }
    else if(ch=='-'){
        printf("%d",n-m);
    }
    else if(ch=='*'){
        printf("%d",n*m);
    }
    else if(ch=='/'){
        if(n==0 || m==0){
            printf("error");
        }
        else{
            printf("%d",n/m);
        }
        
    }

}











    