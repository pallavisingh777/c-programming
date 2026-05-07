#include<stdio.h>
int main(){
    //Declaring Variables
    char character;


    //Taking Input
    printf("Enter a character: ");
    scanf("%c",& character);

    //Program Logic
    if(character=='a'|| character=='e' || character=='i' || character=='o' || character=='u'){
        printf("vowel");
    }
     else{
        printf("consonant");
     }


}
