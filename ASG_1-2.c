#include <stdio.h>

int main() {
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int nth;
    printf("enter nth bit to be toggled");
    scanf("%d",&nth);
    int k= n ^(1<<nth);
    printf("%d",k);
return 0;

     
}
