#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    float USD, u, EURO, e, YEN, y, SWISS_FRANC, s_f, BRITISH_POUND, b_p;
    int choice;
    int yes_or_no;
    do
    {
    printf("------------INDIAN CURRENCY CONVERTER------------\n");
    printf("-------------------------------------------------\n");
    printf("\n");
    printf("\n");
    printf("HELLO USER THIS IS A CURRENCY CONVERTER MODULE\n\n");
    printf("  select:\n   '1' for USD to INR \n   '2' for EURO to INR\n   '3' for YEN to INR\n   '4' for SWISS_FRANC to INR\n   '5' for BRITISH_POUND to INR\n   '6' for exit\n");  
    printf("\n  Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                printf("  Enter the amount in USD to be converted into INR:  ");
                scanf(" %f",&USD);
                u=USD*74.73;
                printf("\n  The amount is Rs. %f.\n ",u);
                break;
               
        case 2:
                printf("  Enter the amount in EURO to be converted into INR:  ");
                scanf(" %f",&EURO);
                e=EURO*88.39;
                printf("\n  The amount is Rs. %f.\n ",e);
                break;
               
        case 3:
                printf("  Enter the amount in YEN to be converted into INR:  ");
                scanf(" %f",&YEN);
                y=YEN*0.68;
                printf("\n  The amount is Rs. %f.\n ",y);
                break;
   
        case 4:
                printf("  Enter the amount in SWISS_FRANC to be converted into INR:  ");
                scanf(" %f",&SWISS_FRANC);
                s_f=SWISS_FRANC*81.43;
                printf("\n  The amount is Rs. %f.\n ",s_f);
                break;
               
        case 5:
                printf("  Enter the amount in BRITISH_POUND to be converted into INR:  ");
                scanf(" %f",&BRITISH_POUND);
                y=BRITISH_POUND*103.02;
                printf("\n  The amount is Rs. %f.\n ",y);
                break;
               
        case 6:
                printf("  thank you, please visit again\n");
                exit(0);
               
        default :
                printf("  Invalid choice, try again\n");
    }
    printf(" \n  Do you want to continue? \n");
    printf(" \n  Enter 1 to continue\n");
    printf("  Enter 2 to end\n");
    scanf("   %d",&yes_or_no);
    }
    while(yes_or_no==1);
    return 0;
}