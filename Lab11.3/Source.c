#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "rus");

	int M[100];
	int n, value, number, productNumbers = 1;

	printf("Напишите количество элементов массива: ");
	scanf("%d", &n);

	for (number = 1; number <= n; number++) {
		printf("M[%i] = ", number);
		scanf("%d", &value);

		M[number] = value;

		if (value > 0) {
			productNumbers *= number;
		}
	}
	printf("Произведение порядковых номеров положительных элементов массива = %d", productNumbers);
}