#include<stdio.h>
int main(){
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    for(a=0; a<=40; a=a+1){
        if(a%2== 0){
            printf("%d",a);
        }
    }

}
