// ���� 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i;
//	for (i = 1; i <= 5; i++) {
//		printf("%d : for�� ���� ���๮\n", i);
//	}
//	printf("\n���α׷� ����\n");
//
//	return 0;
//}

// ���� 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int num;
//	scanf("%d", &num);
//	for (int i = num; i >= 0; i--) {
//		printf("%d ", i);
//	}
//	printf("\n\n���α׷� ����\n");
//
//	return 0;
//}

// 1.
//#define _crt_secure_no_warnings
//#include <stdio.h>
//
//int main() {
//	int num, a = 0;
//	scanf("%d", &num);
//	for (int i = 1; i <= num; i++) {
//		a += i;
//	}
//	printf("1���� %d������ �� : %d", num, a);
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a;
//	scanf("%d", &a);
//	for (int i = 1; i <= 9; i++) {
//		printf("%d * %d = %d\n", a, i, a * i);
//	}
//
//	return 0;
//}

// 3.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int even, plus = 0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &even);
//		if (even % 2 == 0) {
//			plus = plus + even;
//		}
//	}
//	printf("%d", plus);
//
//	return 0;
//}

// 4.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int sevenplus=0, fiveplus=0, integar;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &integar);
//		if (integar % 5 == 0) {
//			fiveplus += 1;
//		}
//		if (integar % 7 == 0) {
//			sevenplus += 1;
//		}
//	}
//	printf("5�� ��� : %d\n", fiveplus);
//	printf("7�� ��� : %d", sevenplus);
//
//	return 0;
//}


// 5.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int s, f, a=0;
//	scanf("%d %d", &s, &f);
//	for (int i = s; i <= f; i++) {
//		if (s % 4 == 0) {
//			a = a + s;
//		}
//		s++;
//	}
//	printf("%d", a);
//
//	return 0;
//}

// 6.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	double actualnumber, wholenumber = 0;
//	int plus=0;
//	for (int i = 0; i < 1; i--) {
//		scanf("%lf", &actualnumber);
//		if (actualnumber < 0) {
//			break;
//		}
//		plus++;
//		wholenumber = wholenumber + actualnumber;
//	}
//	printf("�Է¹��� ���� ��� : %g", wholenumber / plus);
//
//	return 0;
//}

// 7.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int input, i, a=0;
//	scanf("%d", &input);
//	for (i = 0; i < input; i++) {
//		if (a > input) {
//			break;
//		}
//		a += i+1;
//	}
//	printf("%d %d", i, a);
//
//	return 0;
//}

// 8.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n, input1, biggest=-1;
//	scanf("%d", &n);
//	printf("������ �Է����� ������.\n");
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &input1);
//		if (input1 < 0) {
//			printf("Error");
//			break;
//		}
//		if (input1 >= biggest) {
//			biggest = input1;
//		}
//	}
//	printf("%d", biggest);
//
//	return 0;
//}

// ��ȭ 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int sosu;
//	scanf("%d", &sosu);
//	for (int i = 2; i < sosu; i++) {
//		if (sosu % i == 0) {
//			printf("�Ҽ� �ƴ�");
//			return 0;
//		}
//	}
//	printf("�Ҽ�");
//
//	return 0;
//}

// ��ȭ 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, a, n1, n2, n3;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &a);
//		if (i == 1) {
//			n1 = a;
//		}
//		if (i == (n - (n / 2))) {
//			n2 = a;
//		}
//		/*if (i == n) {
//			n3 = a;
//		}*/
//	}
//	printf("%d %d %d", n1, n2, a);
//
//	return 0;
//}