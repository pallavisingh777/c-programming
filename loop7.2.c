#include<stdio.h>
int main(){
    int i;
    int j;
    int k;

    for(i=0; i<=2; i=i+1){
        for(j=0; j<=i; j=j+1){
            printf("*");
        }
        for(k=0; k<2; k=k+1){
            printf(" ");
        }
        printf("\n");
    }

}
