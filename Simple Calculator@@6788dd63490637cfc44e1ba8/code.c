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
    else{
        printf("%d",n/m);
    }

}











    return 0;
}