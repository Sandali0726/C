#include <stdio.h>
struct laptop{
    int id;
    char model[20];  //using struct we can use primitive data types and user defined data types together    
    int price;
};


void main(){
     
    struct laptop xps,macbook;
    printf("Enter 1st laptop details\n");   
    printf("Enter id\n");
    scanf("%d",&xps.id);  
    printf("Enter model\n");
    scanf("%s",&xps.model);  
    printf("Enter price\n");
    scanf("%d",&xps.price);
    printf("1st laptop = %d : %s : %d\n",xps.id,xps.model,xps.price );

    printf("Enter 2st laptop details\n");   
    printf("Enter id\n");
    scanf("%d",&macbook.id);  
    printf("Enter model\n");
    scanf("%s",&macbook.model);  
    printf("Enter price\n");
    scanf("%d",&macbook.price);
    printf("2st laptop = %d : %s : %d",macbook.id,macbook.model,macbook.price );
}