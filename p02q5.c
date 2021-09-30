#include <stdio.h>
#define subm(a,b) (a-b)
#define cubem(a) (a*a*a)
#define minm(a,b) ((a<=b) ? a : b)
#define oddm(a) ((a % 2 == 1) ? 1 : 0)


int subf(int a, int b) {
	return a - b;
}

int cubef(int a) {
	return a * a * a;
}

int minf(int a, int b) {
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}

int oddf(int a) {
	if (a % 2 == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
void main(){
	int a = 5;
	int b = 3;
	int c;
	c = subf(a,b);
	printf("subf(a,b) = %d\n", c);
	c = subm(a,b);
	printf("subm(a,b) = %d\n", c);
	c = subf(a++,b--);
	printf("subf(a++,b--) = %d\n", c);
	a = 5;
	b = 3; //reset a,b values
	c = subm(a++,b--);
	printf("subm(a++,b--) = %d\n", c);

        a = 5;
        b = 3;
        c = cubef(a);
	printf("cubef(a) = %d\n", c);
        c = cubem(a);
	printf("cubem(a) = %d\n", c);
        c = cubef(--a);
	printf("cubef(--a) = %d\n", c);
        a = 5;
        b = 3; //reset a,b values
        c = cubem(--a);
	printf("cubem(--a) = %d\n", c);

	a = 5;
        b = 3;
        c = minf(a,b);
	printf("minf(a,b) = %d\n", c);
        c = minm(a,b);
	printf("minm(a,b) = %d\n", c);
        c = minf(--a,--b);
	printf("minf(--a,--b) = %d\n", c);
        a = 5;
        b = 3; //reset a,b values
        c = minm(--a,--b);
	printf("minm(--a,--b) = %d\n", c);

	a = 5;
        b = 3;
        c = oddf(a);
	printf("oddf(a) = %d\n", c);
        c = oddm(a);
	printf("oddm(a) = %d\n", c);
        c = oddf(a++);
	printf("oddf(a++) = %d\n", c);
        a = 5;
        b = 3; //reset a,b values
        c = oddm(a++);
	printf("oddm(a++) = %d\n", c);
}
