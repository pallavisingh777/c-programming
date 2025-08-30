#include<stdio.h>
int main(){
    //Declaring Variables
    float basic_salary;
    float dearness_allowance;
    float house_rent_allowance;
    float gross_salary;

    //Taking Input
    printf("enter Ramesh's basic_salary:");
    scanf("%f",&basic_salary);

    dearness_allowance=0.40;
    house_rent_allowance=0.20;

    //Formula
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    //Program Logic
    printf("gross_salary of Ramesh=%2f\n",gross_salary);

}
