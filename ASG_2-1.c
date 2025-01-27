#include <stdio.h>

int main() {
    double n;
    printf("enter 1st number");
    scanf("%lf",&n);
    char c;
    printf("enter operator");
    scanf( " %c",&c);
    double n2;
    printf("enter 2nd number");
    scanf("%lf",&n2);
   double k= 0;
    switch (c)
    {
    case '+':
        k=n+n2;
         printf("%lf",k);
        break;
    case '-':
        k=n-n2;
         printf("%lf",k);
        break;
    case '/':
    if (n2!=0){
        k=n/n2;
         printf("%lf",k);}
         else{printf("math error");}
        break;
    case '*':
    k=n*n2;
    printf("%lf",k);
    break;
    default:
    printf("invalid operator");
        break;
    }
    
return 0;

     
}
