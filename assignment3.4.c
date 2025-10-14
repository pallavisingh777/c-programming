#include<stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    int largest;

    printf("Enter Number 1: ");
    scanf("%d",&num1);

    printf("Enter Number 2: ");
    scanf("%d",&num2);

    printf("Enter Number 3: ");
    scanf("%d",&num3);

    if(num1>=num2){
        if(num1>=num3){
            largest=num1;
        }else{
            largest=num3;
        }
    }else{
        if(num2>=num3){
            largest=num2;
        }else{
            largest=num3;
        }
    }
    printf("Largest Number= ");
    printf("%d",largest);



}
