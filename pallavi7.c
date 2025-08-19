int main () {
    int n;
    int x;

    printf("enter a number");
    scanf("%d",&n);

    n%2 == 0? (x = n*n): (x = n*n*n);
    printf("%d",x);

}
