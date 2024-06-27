#include <stdio.h>

int main(){
    //int-2bytes , float-4bytes, char - 1bytes
    int i=9;
    //int i=9.9;  // output = 9
    float e=7.98;
    //float e=7;
    char q ='u';
    //char q =65; //output = A cahracter value of 65
    printf("%d \n",i); //%d
    printf("%f \n",e);//%f
    printf("%d \n",q); // get value of cahr
    printf("%c \n",q); //%c


// \t = tab space
for(int i=0;i<=256;i++){
    printf("% d %c \t",i,i);
}


//------------ARRAY--------------
//int g={1,2,3,4};
int z[10];
for(int i=0;i<10;i++){
    z[i]=i;

}
printf("%d",z[0]);
// We can't print array at once. we have to call loop  or function for this purpose 

//------------2D ARRAY--------------

//int h[3][2]={{1,2},{4,5},{6,7}} ;    // must tell the dimension
int k[10][10];
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        k[i][j]=j;

    }
    

}
printf("%d",k[9][9]);
return 0;
}
