#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char arr[50];
    int n;
    char brr[50];
    scanf("%s %d %s",&arr,&n,&brr);
    printf("Name: %s\nAge:%d\nHobby: %s",arr,n,brr);
}