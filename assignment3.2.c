#include<stdio.h>
int main(){
    // declaring Value
    int m;
    int n;

    // Taking Input
    printf("enter the integer value");
    scanf("%d",& m);

    // Program Logic
    if(m > 0){
        printf("n = 1");
    }
    else if(m == 0){
        printf("n = 0");
    }
    else{
        printf("n = -1");
    }

}
