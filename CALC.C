#include<stdio.h>
int main()
{       int add,sub,mul,n;
	float div;
	int a,b;
	printf("Enter 1st no.:");
	scanf("%d",&a);
	printf("Enter the 2nd No. :");
	scanf("%d",&b);
	printf("1.Add");
	printf("2.Sub");
	printf("3.Mul");
	printf("4.Div");
	printf("Enter Choice :");
	scanf("%d",&n);

	switch(n)
	{
	 case 1:
	     add=a+b;
	     printf("%d",add);
	     break ;

	case 2:
	     sub=a-b;
	     printf("%d",sub);
	     break ;

	case 3:
	    mul=a*b;
	    printf("%d",mul);
	    break ;

	case 4:
	    div=a/b;
	    printf("%d",div);
	    break;

	default:
	    printf("Invalid");
	}

	return 0;

	}