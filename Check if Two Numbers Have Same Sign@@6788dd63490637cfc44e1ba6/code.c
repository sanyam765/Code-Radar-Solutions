#include <stdio.h>
int main() {
    int m,n;
    scanf("5d %d ",&m,&n);
    if(m>0 && n>0 || m<0 && n<0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    
    return 0;
}