#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch == 'R'){
        printf("Stop");
    }
    else if(ch=='R'){
        printf("Go");
    }
    else if(ch=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }



    return 0;
}