#include <stdio.h>
int main()
{
	int a,b;
	char c1, c2;
	printf("ÇëÊäÈëÊı×Ö£º");
	scanf("%d%d", &a, &b);
	rewind(stdin);
	printf("ÇëÊäÈë×Ö·û£º");
	scanf("%c%c", &c1, &c2);
	printf("a=%d,b=%d\n", a, b);
	printf("c1=%c,c2=%c\n", c1, c2);
	return 0;
}