#include <stdio.h>
int main(){
	int* pc;
	int c;
	c=22;
	printf("Address of c:%d\n",&c);
	printf("Value of c:%d\n\n",c);
	pc=&c;
	printf("Address of pointer pc:%d\n",pc);
	printf("Content of pointer pc:%d\n\n",*pc);
	c=11;
	printf("Address of pointer pc:%d\n",pc);
	printf("Content of pointer pc:%d\n\n",*pc);
	*pc=2;
	printf("Address of c:%d\n",&c);
	printf("Value of c:%d\n\n",c);
	return 0;
}

// Output of the program:


// Address of c:-1863603452
// Value of c:22

// Address of pointer pc:-1863603452
// Content of pointer pc:22

// Address of pointer pc:-1863603452
// Content of pointer pc:11

// Address of c:-1863603452
// Value of c:2