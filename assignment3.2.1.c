#include<stdio.h>
int main(){
    //Declaring Value
    int a;
    int b;
    int c;
    int D;

    //Taking Input
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);

    //Applying Formula
    D = b^2-4*a*c;

    //Program Logic
    if(D>0){
        printf("Real and distinct roots: ");
        printf("%d",D);

    }else if(D==0){
        printf("Real and equal roots: ");
        printf("%d",D);

    }else{
        printf("imaginary roots: ");
        printf("%d",D);


}
}
