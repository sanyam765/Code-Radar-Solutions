#include <stdio.h>
int main() {
 int n;
  if(n%400==0 || n%4==0 && n%100!=0){
    printf("Leap Year");
    }
    else{
      printf("Not a Leap Year");
    }