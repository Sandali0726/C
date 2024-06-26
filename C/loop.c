#include <stdio.h>
int main(){
    int i=0;
    while(i<6){
        printf("Value of i is %d\n",i);
        i++;
    }
int j=0;
    do{
        printf("Sandali \n");
        j++;
    }
    while (j<8);
    

    for(int t=0;t<5;t++){
        printf("Gatheesh \n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("*");
        }
        printf(" \n");
    }

    for(int i=0;i<8;i++){
        printf("*");
        if(i==0 || i==7){
            for(int j=0;j<8;j++){
                printf("*");
            }
        }
        else{
            for(int j=0;j<8;j++){
                printf(" ");
            }
        }
        
        printf("*");
        printf(" \n");
    }
}