#include<stdio.h>
int main()
{
    int pin =1234;
    int enteredpin;
    int choice;
    float balance = 5000;
    float amount;

    printf("======WELCOME TO ALL========\n");

    printf("Enter your PIN : ");
    scanf("%d",&enteredpin);

    if(enteredpin != pin)
    {
       printf("\nTHE PIN YOU ENTERED IN INCORRECT");
       return 0;
    }
    else
    {
    printf("\nLogin Succssfull!!!/n");
     }
    do
    {
      printf("====ATM MENU====\n");
      printf("1. CHECK BALANACE\n");
      printf("2.DEPOSIT MONEY\n");
      printf("3.WITHDRAW MONEY\n");
      printf("4.EXIT\n");

      printf("ENTER YOUR CHOICE :");
      scanf("%d",&choice);

      switch(choice)
      {
	 case 1:
	   printf("YOUR CURRENT BALANCE : Rs. %2f\n",balance);
	   break;

	 case 2:
	   printf("ENTER DEPOSIT AMOUNT : Rs.");
	   scanf("%f",&amount);

	   if (amount > 0)
	   {
	     balance = balance + amount;
	     printf("MONEY DEPOSITED SUCCESSFULLY!!!\n");
	     printf("NEW BALANCE : Rs. %2f\n",balance);
	   }
	   else
	   {
	     printf("Invalid Amoount!!!\n");
	   }
	   break;

	case 3:
	    printf("Enter Withdrawal amount :");
	    scanf("%f",&amount);

	    if (amount <= 0)
	    {
		printf("INBALID AMOUNT!!!\n");
	    }
	    else if (amount<=balance)
	    {
	       balance =balance - amount;
	       printf("Please Collect your cash \n");
	       printf("Remaining Balance : Rs. %2f\n",balance);
	    }
	    else
	    {
	       printf("Insufficient Balance!!!\n");
	    }
	    break;
	case 4:
	    printf("Thanks For coming visit again");
	default :
	    printf("Invalid Choice!!!\n");
	}
  }while (choice != 4);

     return 0;
}