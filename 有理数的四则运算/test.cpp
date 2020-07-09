
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

void print(long long a, long long b) {
	long long c = 0;
	if (a > 0) {
		if (b == 1) {
			printf("%lld", a);
		}
		else if (a > b) {
			c = a / b;
			a -= b * c;
			printf("%lld %lld/%lld", c, a, b);
		}
		else {
			printf("%lld/%lld", a, b);
		}

	}
	else if (a == 0) {
		printf("%c", '0');
	}
	else {
		if (b == 1) {
			printf("(%lld)", a);
		}
		else if (-1 * a > b) {
			c = a / b;
			a = (-1 * a) % b;
			printf("(%lld %lld/%lld)", c, a, b);
		}
		else
		{
			printf("(%lld/%lld)", a, b);
		}
	}
}
int gcd(long a, long b) {
	return b == 0 ? a : gcd(b, a % b);
}

void add(long long a1, long long b1, long long a2, long long b2) {
	print(a1, b1);
	printf(" + ");
	print(a2, b2);
	printf(" = ");
	long long a3 = a1 * b2 + a2 * b1;
	long long b3 = b1 * b2;
	long long gcd3 = abs(gcd(a3, b3));
	a3 /= gcd3;
	b3 /= gcd3;
	print(a3, b3);
	printf("\n");

}

void substract(long long a1, long long b1, long long a2, long long b2) {
	print(a1, b1);
	printf(" - ");
	print(a2, b2);
	printf(" = ");
	long long a3 = a1 * b2 - a2 * b1;
	long long b3 = b1 * b2;
	long long gcd3 = abs(gcd(a3, b3));
	a3 /= gcd3;
	b3 /= gcd3;
	print(a3, b3);
	printf("\n");
}

void multiply(long long a1, long long b1, long long a2, long long b2) {
	print(a1, b1);
	printf(" * ");
	print(a2, b2);
	printf(" = ");
	long long a3 = a1*a2;
	long long b3 = b1 * b2;
	long long gcd3 = abs(gcd(a3, b3));
	a3 /= gcd3;
	b3 /= gcd3;
	print(a3, b3);
	printf("\n");
}

void divide(long long a1, long long b1, long long a2, long long b2) {
	print(a1, b1);
	printf(" / ");
	print(a2, b2);
	printf(" = ");
	if (a2 == 0) {
		printf("Inf");
	}
	else if (a2 < 0) {
		long long a3 =-1* a1 * b2;
		long long b3 = -1*b1 * a2;
		long long gcd3 = abs(gcd(a3, b3));
		a3 /= gcd3;
		b3 /= gcd3;
		print(a3, b3);
		printf("\n");
	}
	else {
		long long a3 = a1 * b2;
		long long b3 = b1 * a2;
		long long gcd3 = abs(gcd(a3, b3));
		a3 /= gcd3;
		b3 /= gcd3;
		print(a3, b3);
		printf("\n");

	}

}
int main() {
	long long a1, b1, a2, b2;
	scanf_s("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	long long gcd1 = abs(gcd(a1, b1));
	a1 /= gcd1;
	b1 /= gcd1;
	long long gcd2 = abs(gcd(a2, b2));
	a2 /= gcd2;
	b2 /= gcd2;
	add(a1, b1, a2, b2);
	substract(a1, b1, a2, b2);
	multiply(a1, b1, a2, b2);
	divide(a1, b1, a2, b2);
	system("pause");
	return 0;
}
