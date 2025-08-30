#include<stdio.h>
float main(){
    //Declaring Variables
    float total_selling_price;
    float total_profit;
    float total_cost_price;
    float cost_price_per_item;

    //Taking Input
    printf("enter the tatal_selling_price");
    scanf("%f",&total_selling_price);
    printf("enter the tatal_profit");
    scanf("%f",&total_profit);

    //Formula
    total_cost_price = total_selling_price - total_profit;
    cost_price_per_item = total_cost_price / 15;

    //Program Logic
    printf("cost price of one item=");
    printf("%f",cost_price_per_item);


}
