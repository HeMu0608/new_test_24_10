#include <stdio.h>
void main()
{
	int a, b;
	char c1, c2;
	printf("���������֣�");
	scanf_s("%d%d", &a, &b);
	fflush(stdin);
	printf("�������ַ���");
	scanf_s("%c%c", &c1, &c2);
	printf("a=%d,b=%d\n", a, b);
	printf("c1=%c,c2=%c\n", c1, c2);
}
