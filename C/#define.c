#include <stdio.h>
# define x 8
# define y printf("Hello\n");
int main(){
    printf("Value of x is %d \n",x+3);
    y;
    if(printf("Hello\n")){

    }
    int i=3;
    switch (i)
    {
    case 0:
        printf("Value is 0\n");
        break;
    case 1:
        printf("Value is 1\n");
        break;
    case 2:     
        printf("Value is 2\n");
        break;  
    case 3:
        printf("Value is 3\n");
        break;
    default:
        break;
    }
    int k=8,j;

    i=3 ? printf("True\n"):printf("False\n");
    j = k==9? 5:6;
    printf("Value of j is %d\n",j);
    printf("%d", 1^2); //01 10---11=3  ^ XOR
    

}