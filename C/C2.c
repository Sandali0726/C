#include <stdio.h>
int main(){
    int i=7;  
    int j=2;
    int result= i<j;
    int y= 3==3;
    printf("Result is %d \n",result); //true=1 false=0
    printf("Result is %d \n",y);
    printf("Result is %d \n",4==5 && 5<9);
    printf("Result is %d",4==5 || 5<9);
    
     //& - bitwise and
     //int i=7;  //111
    //int j=2;   //010   ---> 010=2   |111=7
     printf("Result is %d \n",i & j);
     printf("Result is %d \n",i | j);

    //left and right shift
    int k=8; //1000
    printf("Result is %d \n",k<<1); //10000=16
    printf("Result is %d \n",k>>1); //100=4

    //-----IF ELSE-----
    int x=5;
    if(x>5){
        printf("X is greater than 5 \n");
    }else if(x==5){
        printf("X is equal to 5\n");
    }else{  //if x<5
        printf("X is less than 5\n");
    }

    int a=3,b=1,g=9;
    if(a<b && a<g){
        printf("a is smallest");
    }else if(b<g){
        printf("b is smallest");    
    }else{  
        printf("g is smallest");
    }




}