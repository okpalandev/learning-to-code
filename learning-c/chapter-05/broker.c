#include <stdio.h>

int main(void){
float commission,value;

printf("Enter value of trade: ");
scanf("%f",&value);

if(value < 25000.00f)
    commission= 30.00f+0.17f * value;
else if (value < 6250.00f)
    commission = 56.00f +.0066f * value;
else if(value < 2000.00f)
    commission = 76.00f +.0034f * value;
else if (value < 500000.00f)
    commission = 155.00f +0.011f * value;
else
    commission = 255.00+0.009f *value;

if(commission < 39.00f)
    commission = 39.00f;

 printf("CommissionL $%.2f\n:",commission);
return 0;
}

