#include <stdio.h>
int main() {
	int a = NULL;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("입력하신 숫자는 %d입니다\n\n", a);

	int b = NULL;

	printf("첫번째 숫자를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("두번째 숫자를 입력하시오 : ");
	scanf_s("%d", &b);

	printf("%d * %d = %d입니다.",a, b, a * b);

	return 0;
}