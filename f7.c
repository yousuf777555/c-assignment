#include<stdio.h>
int y;  // global variable

int main()
{
	int a;	// automatic storage class 
	register int b=9;
	static int c=9;
	printf("%d auto storage class initial value is gargage value\n",a);	// gargage value
	printf("%d global variable initial value is zero\n",y);	
	printf("%d using register storage classs\n",b);
	printf("%d using static storage classs\n",c);



		return 0;
}
}

