#include<stdio.h>
int main(){
    int n;
    int r;
    int t;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;

    while(n!=0){
        t=n%10;
        r=r*10+t;
        n=n/10;
    }
    if(temp==r){
        printf("Both are equal: ");
        printf("%d",r);
    }
    else{
        printf("Both are not equal: ");
        printf("%d",r);
    }

}
