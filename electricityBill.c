#include<stdio.h>

int main(){
    int id, unit;
    char name[20];
    float rate = 0.0;

    printf("Enter Customer ID : ");
    scanf("%d",&id);
    printf("\nEnter the name of the customer : ");
    scanf("%s",name);
    fflush(stdin);
    printf("\nEnter the unit consumed by the customer : ");
    scanf("%d",&unit);

    if (unit <= 199)
        rate = 1.20;
    else if (unit >= 200 && unit < 400)
        rate = 1.50;
    else if(unit >= 400 && unit < 600)
        rate = 1.80;
    else if (unit >= 600)
        rate = 2.00;

    printf("\nElectricity Bill\n");
    printf("\nCustomer IDNO\t\t\t: %d\n",id);
    printf("\nCustomer Name\t\t\t: %s\n",name);
    printf("\nUnit Consumed\t\t\t: %d\n",unit);
    printf("\nAmount Charges @Rs. %.2f  per unit : %.2f\n",rate,unit * rate);
    if ((unit * rate) >= 400){
        printf("Surcharge Amount\t\t\t: %.2f\n",(unit * rate) * (0.15));
    }
    if ((unit * rate) < 100){
        printf("\nNet Amount Paid By the Customer\t: 100\n");
    }
    else{
        printf("\nNet Amount Paid By the Customer\t: %.2f\n\n", (unit * rate) + ((unit * rate) * (0.15)));
    }
    return 0;
}