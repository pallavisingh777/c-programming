int main () {
    int m;

    printf("enter a number");
    scanf("%d",&m) ;

    if (m>=90){
    printf("grade a");

    }
     else if (m<90 && m>=80){
        printf("grade b");
     }
      else if (m<80 && m>=70){
        printf("grade c");
      }
       else if (m<70 && m>=60){
        printf("grade d");
       }
        else {
            printf("grade e");
        }
        }

