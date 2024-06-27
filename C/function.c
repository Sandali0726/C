#include <stdio.h>
int add(int, int);  // declare
void show();  // optional
int fact(int);
int main(){
    show();
    printf("%d",add(2,3));  // calling
    printf("%d",fact(5));

















    return 0;
}
int add(int a, int b){
    return a+b;
}
void show(){
    printf("hi");
}
/*  1.declare
    2. definition
    3.calling*/

int fact(int s){
    if (s==0){
        return 1;
}
else{
    return s*fact(s-1);
}
}

