#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the first value = ");
    scanf("%d",&x);

    printf("Enter the second value = ");
    scanf("%d",&y);

    if ((x%y)==0)
    {
    printf("Divisible.");
    }
    else{
    printf("Not divisible");
    }
}