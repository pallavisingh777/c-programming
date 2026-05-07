#include<stdio.h>
int main(){
    //Declaring Variables
    float cp;
    float sp;
    float profit;
    float loss;

    //Taking Input
    printf("Enter the cp of the product: ");
    scanf("%f",&cp);
    printf("Enter the sp of the product: ");
    scanf("%f",&sp);


    //Program Logic
    if(sp>cp){
        profit = sp-cp;
        printf("profit %2f",profit);
    }
     else if(sp<cp){
        loss = cp-sp;
        printf("loss %2f",loss);
     }
      else{
        printf("no profit no loss");
      }

}
