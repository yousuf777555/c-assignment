#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	 
        int a=34;        
	signed short int x=55;
	signed long int y=123;
	unsigned short int n=22;
	unsigned long int m=1212332;
	float b=3.12334;
	char c='h';
	signed char h=97; 
	unsigned char j=120; 
	double z=3.1242356246; 
	long double l=345.243535325;

	printf("%lu is the size of int\n",sizeof(a));
        printf("%lu is the size of signed short\n",sizeof(x));
        printf("%lu is the size of signed long\n",sizeof(y));
        printf("%lu is the size of unsigned short int\n",sizeof(n));
        printf("%lu is the size of unsigned long int\n",sizeof(m));
        printf("%lu is the size of float\n",sizeof(b));
        printf("%lu is the size of char\n",sizeof(c));
        printf("%lu is the size of signed char\n",sizeof(h));
        printf("%lu is the size of unsigned char\n",sizeof(j));
        printf("%lu is the size of double\n",sizeof(z));
        printf("%lu is the size of long double\n",sizeof(l));

	printf("\n");
	printf("\n");
	printf("\n");

	//printf("limit of int is %d\n",INT_MIN);
 printf("limit of int minimum is %d\n",INT_MIN);
 printf("limit of int  maxis %d\n",INT_MAX);
 printf("limit of unsigned int is %d\n",UINT_MAX);
 printf("limit of  short int is %d\n",SHRT_MIN);
 printf("limit of  short int max is %d\n",SHRT_MAX);
 printf("limit of short char is %d\n",SCHAR_MIN);
 printf("limit of short char max is %d\n",SCHAR_MAX);
 printf("limit of unsigned char is %d\n",UCHAR_MAX);
 printf("limit of float is %f\n",FLT_MIN);
 printf("limit of float max is %f\n",FLT_MAX);
}

