#include <stdio.h>
#include <math.h>

#define VERSION "1.0"
#define OPERATIONS "1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Square Root"

int main()
{
	int sel, a, b;
	printf("Select operation: " OPERATIONS "\n");
	scanf("%d", &sel);
	printf("First number: \n");
	scanf("%d", &a);
	printf("Second number: \n");
	scanf("%d", &b);
	switch(sel)
	{
		case 1:
			printf("%d\n", a += b);
			break;
		case 2:
			printf("%d\n", a -= b);
			break;
		case 3:
			printf("%d\n", a *= b);
			break;
		case 4:
			printf("%d\n", a /= b);
			break;
		case 5:
			printf("%f\n", sqrt(a));
			break;
		default:
			printf("Invalid operation");
	}
	return 0;
}
