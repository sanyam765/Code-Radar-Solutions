#include<stdio.h>
int main(){
    float n,m;
    char ch;
    scanf("%f %f %c",&n,&m,&ch);
    if(ch=='+'){
        printf("%d",n+m);
    }
    else if(ch=='-'){
        printf("%d",n-m);
    }
    else if(n!=0 || m!=0){
    
        printf("%d",n/m);
    }

}











    return 0;
}