int main () {
    int a;
    int b;
    int c;

    printf("enter the sides of triangle");
    scanf("%d",&a);

    printf("enter the sides of triangle");
    scanf("%d",&b);

    printf("enter the sides of triangle");
    scanf("%d",&c);

    if (a==b  &&  b==c){
        printf("equilateral triangle");
    }
      else if (a==b || b==c|| a==c){
        printf("isosceles triangle");
      }
       else {
        printf("scalene triangle");
       }
}
