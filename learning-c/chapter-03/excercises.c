#include <stdio.h>

int main(){

printf("%6d,%4d \n",86,1040);
printf("%12.5e \n",30.253);
printf("%.4f \n",83.162);
printf("%-6.2g \n",.0000009979);

int i,j;
float x;
scanf("%d%f%d",&i,&x,&j);
printf("%d \t %f \t %d",&i,&x,&j);

int k,l;
float y;
scanf("%d%f%d",&k,&y,&l);
printf("%d \t %f \t %d",&k,&y,&l);

return 0;
}

