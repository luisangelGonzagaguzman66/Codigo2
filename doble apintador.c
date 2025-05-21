#include<stdio.h>

void intercambio (int *a, int *b){
int temp;
temp=*b;
*b=*a;
*a=temp;
 }
int main(void){
int x=2, y=5;

printf("antes x=%d, y=%d \n",x,y);
intercambio(&x,&y);
printf("después x=%d, y=%d\n",x,y);


//void intercambio(int*a, int*b)



    return 0;
}