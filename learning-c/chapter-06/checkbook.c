#include <stdio.h>
#include <stdbool.h>

int main(void){
 int cmd;
 bool a=true;
 float balance = .1f ,credit,debit;
 printf("*** acme checkbook-balancing program ***\n");
 printf("Comands: 0==clear ,1=credit,2=debit");
 printf("3=balance , 4=exit\n\n");

 for(;;){
    printf("Enter command: ");
    scanf("%d",&cmd);
    switch(cmd){
        case 0:
            balance =0.0f;
            break;
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f",&credit);
            balance +=credit;
            break;
        case 2:
            printf("Enter amount of debit");
            scanf("%f",&debit);
            balance -= debit;
            break;
        case 3:
            printf("Current balance: $%.2f\n",balance);
            break;
        case 4:
            return 0;
        default:
            printf("Commands: 0=clear,1=credit,2=debit,");
            printf("3=balance, 4=exit\n\n");
            break;
    }
 }
}
