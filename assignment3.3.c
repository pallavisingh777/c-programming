#include<stdio.h>
int main(){
    //Declaring Value
    int x;
    int y;

    //Taking Input
    printf("Enter the coordinates of x");
    scanf("%d", & x);

    printf("Enter the coordinates of y");
    scanf("%d", & y);

    //Program Logic
    if(x>0 && y>0){
        printf("The point lies in Quadrant 1");
    }
    else if(x<0 && y>0){
        printf("The point lies in Quadrant 2");
    }
    else if(x<0 && y<0){
        printf("The point lies in Quadrant 3");
    }
    else if(x>0 && y<0){
        printf("The point lies in Quadrant 4");
    }
    else{
        printf("x=0 && y=0");
    }

}

