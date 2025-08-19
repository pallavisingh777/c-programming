int main (){
    int n;
    int r;

    printf("enter a number");
    scanf ("%d",&n);

    r=n%10;

    if(r%2==0) {
        printf("divisible");

    }
    else{
        printf("not divisible");
    }
}
