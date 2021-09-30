/* This C program demonstrates the switch statement without using breaks. */
/* The program is tested with GCC and MS Visual C++ platform
 * */
#include <stdio.h>
void main() {
	int n1 = 20;
	int n2 = 5;
	char ch;
	ch = '+';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': 
		printf("Sum= %d\n", n1+n2);
		break;
	case '-': 
		printf("Diff= %d\n", n1-n2);
		break;
	case '/': 
		printf("Division= %d\n", n1/n2);
		break;
	case '*': 
		printf("Product= %d\n", n1*n2);
		break;
	default: 
		printf("invalid operator\n");
		break;
	}
	ch = '-';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': 
		printf("Sum= %d\n", n1+n2);
		break;
	case '-': 
		printf("Diff= %d\n", n1-n2);
		break;
	case '/': 
		printf("Division= %d\n", n1/n2);
		break;
	case '*': 
		printf("Product= %d\n", n1*n2);
		break;
	default: 
		printf("invalid operator\n");
		break;
	}
	ch = '/';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': 
		printf("Sum= %d\n", n1+n2);
		break;
	case '-': 
		printf("Diff= %d\n", n1-n2);
		break;
	case '/': 
		printf("Division= %d\n", n1/n2);
		break;
	case '*': 
		printf("Product= %d\n", n1*n2);
		break;
	default: 
		printf("invalid operator\n");
		break;
	}
	ch = '*';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': 
		printf("Sum= %d\n", n1+n2);
		break;
	case '-': 
		printf("Diff= %d\n", n1-n2);
		break;
	case '/': 
		printf("Division= %d\n", n1/n2);
		break;
	case '*': 
		printf("Product= %d\n", n1*n2);
		break;
	default: 
		printf("invalid operator\n");
		break;
	}
	ch = 'a';
	printf("ch = %c\n", ch);
	switch (ch) {
	case '+': 
		printf("Sum= %d\n", n1+n2);
		break;
	case '-': 
		printf("Diff= %d\n", n1-n2);
		break;
	case '/': 
		printf("Division= %d\n", n1/n2);
		break;
	case '*': 
		printf("Product= %d\n", n1*n2);
		break;
	default: 
		printf("invalid operator\n");
		break;
	}	
}
