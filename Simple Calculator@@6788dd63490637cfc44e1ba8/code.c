#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    char ch;
    scanf(" %c",&ch);
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