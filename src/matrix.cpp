#include <matrix.h>
#include <stdio.h>
#include <stdlib.h> 

matrix::matrix()
{
	/*
		This constructor (the default constructor) creates a matrix with all zero elements
	*/

	e00 = e01 = e10 = e11 = 0;
}

matrix::matrix(double a)
{
	/*
		This constructor should create a diagonal matrix with the diagonal elements equal to a and
		the other elements equal to zero.

		TO DO
	*/

	e00=e11=a;
	e01=e10=0;

}

matrix::matrix(double a, double b, double c, double d)
{
	/*
		This constructor should set the elements the values of the elements using the
		parameters a,b,c,d

		TO DO
	*/
	e00=a;
	e01=b;
	e10=c;
	e11=d;

}

matrix::matrix(const matrix& a)
{
	/*
		This is the copy constructor: it takes a matrix and makes a new one with the same element values
	*/

	e00 = a.e00;
	e01 = a.e01;
	e10 = a.e10;
	e11 = a.e11;
}

matrix& matrix::add(matrix& a)
{
	/*
		The add member function adds the elements of matrix 'a' to this matrix. 
	*/

	e00 = e00 + a.e00;
	e01 = e01 + a.e01;
	e10 = e10 + a.e10;
	e11 = e11 + a.e11;

	return *this;
}

matrix& matrix::scalarmultiply(double x)
{
	e00=e00*x;
	e01=e01*x;
	e10=e10*x;
	e11=e11*x;

	return *this;
}

matrix& matrix::multiply(matrix& m)
{
	e00=e00*m.e00 +e01*m.e10;
	e10=e01*m.e00+e11*m.e10;
	e01=e00*m.e01+e01*m.e11;
	e11=e01*m.e10+e11*m.e11;

	return *this;
}

double matrix::element(int x,int y)
{

	if (x == 1)
	{
		if (y ==1)
		printf("e00\n");

	}

	
	if (x == 1)
	{
		if(y == 2)
		printf("e01\n");
	}
	
	
	if (x == 2)
	{
		if(y==1)
		printf("e10\n");
	}

	if (x == 2)

	{
		if(y==2)
		printf("e11\n");
	}

	

}
double matrix::determinant()
{
	double z = e00*e11 - e10*e01;

	printf("Determinant = %f", z);

	
}

matrix& matrix::inverse()
{
double z = e00*e11 - e10*e01;

e00=z*e00;
e01=-z*e01;
e10=-z*e10;
e11=z*e11;

return *this;

}

void matrix::print()
{

	printf("\n\n%.2f %.2f\n%.2f %.2f", e00, e01, e10, e11);

		
}