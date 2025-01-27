#include <stdio.h>
//To get the bonus I'll solve is using bitwise functions
int main() {
    int n;
    printf("enter a number");
    scanf("%d",&n);
    //since in bits only the first bit represents an odd number so I will check if the numer anded with 1 is 0 then the number is even and vice versa
    if ((n&1)==0){
        printf("The number is odd=0\n");
        printf("The number is even=1\n");
    }
    else{
        printf("The number is odd=1\n");
        printf("The number is even=0\n");
    }
return 0;

     
}
