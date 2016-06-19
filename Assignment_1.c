#include<stdio.h>
#include<conio.h>

typedef struct{
	int numerator;
	int denominator;
}rational;

rational makerational(int, int);
rational add_rational(rational, rational);
rational mult_rational(rational, rational);
rational equal_rational(rational, rational);

void main()
{
	rational r1=makerational(1,3);
	rational r2=makerational(1,3);
	rational sum=add_rational(r1,r2);
	rational mul=mult_rational(r1,r2);	
	equal_rational(r1,r2);
	
	printf("The sum of rational numbers is \n%d.\n",sum.numerator,sum.denominator);
	printf("The multiplication of rational numbers is \n%d \n%d.",mul.numerator,mul.denominator);
};

rational makerational(int a,int b)
{
	rational r;
	r.numerator=a;
	r.denominator=b;
	return r;
}

rational add_rational(rational a, rational b)
{
	rational sum;
	sum.numerator=(a.numerator*b.denominator)+(a.denominator*b.numerator);
	sum.denominator=(a.denominator*b.denominator);
	return sum;
}

rational mult_rational(rational a, rational b)
{
	rational mul;
	mul.numerator=(a.numerator*b.numerator);
	mul.denominator=(a.denominator*b.denominator);
	return mul;
}

rational equal_rational(rational a, rational b)
{
	if(a.numerator==b.numerator&&a.denominator==b.denominator)
	{
		printf("The rational numbers are EQUAL !!\n");
	}
	else{
		printf("The rational numbers aren't EQUAL !!\n");
	}
}
