#include<stdio.h>
int main(){
    int choice;
    int a;
    int b;
    int result;

    printf("Select a Option\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your Choice (1-4)");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("Enter value of a: ");
            scanf("%d",&a);
            printf("Enter value of b: ");
            scanf("%d",&b);
            result=a+b;
            printf("Sum= %d",result);
        break;
        case 2:
            printf("Enter value of a: ");
            scanf("%d",&a);
            printf("Enter value of b");
            scanf("%d",&b);
            result=a-b;
            printf("Subtract= %d",result);
        break;
        case 3:
            printf("Enter value of a");
            scanf("%d",&a);
            printf("Enter value of b");
            scanf("%d",&b);
            result=a*b;
            printf("Product= %d",result);
        break;
        case 4:
             printf("Enter value of a");
            scanf("%d",&a);
            printf("Enter value of b");
            scanf("%d",&b);
            result=a/b;
            printf("Divide= %d",result);
        break;


    }
}
