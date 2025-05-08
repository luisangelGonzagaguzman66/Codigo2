#include<stdio.h>

int main()
{int j;
int i;
int x;
int b;
printf("ingrese valor \n");
scanf("%d",&x);
b=x;
for ( i=b; i>=0; i--){
for(j=i; j>=1; j--) {
printf("*");}
printf("\n");
}
for (i=0; i<=b; i++){
for(j=1; j<=i; j++) {
printf("*");}
printf("\n");
}

    
    return 0;
}