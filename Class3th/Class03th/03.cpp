#include <stdio.h>
int main() {
	int a = NULL;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�Է��Ͻ� ���ڴ� %d�Դϴ�\n\n", a);

	int b = NULL;

	printf("ù��° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &b);

	printf("%d * %d = %d�Դϴ�.",a, b, a * b);

	return 0;
}