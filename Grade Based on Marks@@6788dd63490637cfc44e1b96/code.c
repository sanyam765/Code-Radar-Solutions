#include <stdio.h>



int main() {
   int n;
   if(n>=90){
    printf("A");
   }
   else if(n>=80 && n<90){
    printf("B");
   }
   else if(n>=70 && n<80){
    printf("C");
   }
   else if(n>=60 && n<70){
    printf("D");
   
   }
    else if(n<60){
     printf("F");
    }
    return 0;
}