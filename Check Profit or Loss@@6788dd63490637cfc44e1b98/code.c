#include <stdio.h>



int main() {
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    if(cp>sp){
        printf("Loss");
    }
    else{
        printf("Profit");
    }
    return 0;
}