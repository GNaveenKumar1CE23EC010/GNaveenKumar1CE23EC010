#include<stdio.h>
int main(){
    int num,k=1,count=1,power;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter number of power : ");
    scanf("%d",&power);
    while(count<=power){
        printf("%d\n",k);
        k=k*num; 
        count++;
    }
}
