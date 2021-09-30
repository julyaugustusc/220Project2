/* This C program demonstrates the switch statement without using breaks. */
/* The program is tested with GCC and MS Visual C++ platform
 * */
#include <stdio.h>
void main() {
	int n1 = 20;
	int n2 = 5;
	char ch;

	for(int i = 0; i < 5; i++){
		printf("Menu: +, -, /, *\n");
		ch = getchar();

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
		ch = getc(stdin);
	}
}
