#include 
#include  
using namespace std;


//////// START OF MARKER FOR fib
long long fib(int x) 
/* This function takes in an index an computes which Fibonacci number comes on that index in fibonacci series */
{	// long long data type  guarantees atleast 64 bits
	long long a;	// defining a variable "a" of data type long long
	long long b;	//defining a variable "b" if data type long long
	a = 0;		// assigning "a" equals to zero
	b = 1;		// assigning "b" equals to one
	if(x<=1)	// if the index is one or zero it will return one and zero respectively
	return x;
	else{
	for(int i=1; x+1>i; i++) 	// This loop makes sure that we reach the specific index which is required
{
		long long z;		// defining a variable "z" of data type long long
		z = a + b;		// Adding two integers 'a' and 'b'
		a = b;			// assigning the value of "b" to "a"	
		b = z;			//assigning the value of "z" to "b"
}
	return a;			//returning the value in "a"
}
}

//////// END OF MARKER 
