#include<stdio.h>
int main(){
    //Declaring Variables
    int digit;

    //Taking Input
    printf("Enter a digit: ");
    scanf("%d", &digit);

    //Program Logic
    if(digit=='0'){
        printf("Zero");
    }
    else if(digit=='1'){
        printf("One");
    }
    else if(digit=='2'){
        printf("Two");
    }
    else if(digit=='3'){
        printf("Three");
    }
    else if(digit=='4'){
        printf("Four");
    }
    else if(digit=='5'){
        printf("Five");
    }
    else if(digit=='6'){
        printf("Six");
    }
    else if(digit=='7'){
        printf("Seven");
    }
    else if(digit=='8'){
        printf("Eight");
    }
    else if(digit=='9'){
        printf("Nine");
    }
    else{
        printf("Error");
    }
}
