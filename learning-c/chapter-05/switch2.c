#include <stdio.h>

int main(void){

int grade;
printf("Enter your grade:\n");
scanf("%d",&grade);

switch(grade){
case 4: printf("Excellent");case 3: printf("Good");
case 2:printf("Average");
case 1:printf("Poor");
case 0:printf("Failing");
default:printf("Illegal Grade");
}

return 0;
}
