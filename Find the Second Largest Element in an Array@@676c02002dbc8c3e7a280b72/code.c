#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
}
int secmax = arr[0];
int max = arr[0];
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max = arr[i];
    }
    else if(secmax<max){
        secmax = max;
        break;
    }
}
printf("%d %d",secmax);
}