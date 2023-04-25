//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int num;
//	printf("숫자를 입력하세요. : ");
//	scanf("%d", &num);
//	if (num > 10) {
//		printf("입력한 숫자는 10보다 큽니다.\n");
//		printf("입력한 숫자에서 3을 뺀 값은 %d입니다.\n", num - 3);
//	}
//	printf("끝\n");
//		
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a;
//	printf("정수 입력 : ");
//	scanf("%d", &a);
//	printf("%d\n", a);
//	if (a < 0) {
//		printf("minus");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a;
//	printf("정수 입력 : ");
//	scanf("%d", &a);
//	if (a < 0) {
//		printf("입력 값(%d)은 0보다 작다.", a);
//	}
//	if (a == 0) {
//		printf("입력 값은 0이다.");
//	}
//	if (a > 0) {
//		printf("입력 값(%d)은 0보다 크다.");
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int opt;
//	int num1, num2;
//	int result;
//
//	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈\n");
//	printf("연산을 선택하세요. : ");
//	scanf("%d", &opt);
//
//	printf("두 개의 정수를 입력하세요. : ");
//	scanf("%d %d", &num1, &num2);
//
//	if (opt == 1) {
//		result = num1 + num2;
//		printf("%d + %d = %d", num1, num2, result);
//	}
//	if (opt == 2) {
//		result = num1 - num2;
//		printf("%d - %d = %d", num1, num2, result);
//	}
//	if (opt == 3) {
//		result = num1 * num2;
//		printf("%d * %d = %d", num1, num2, result);
//	}
//	if (opt == 4) {
//		result = num1 / num2;
//		printf("%d / %d = %d", num1, num2, result);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n1, n2;
//	printf("정수 두 개를 입력하세요. : ");
//	scanf("%d %d", &n1, &n2);
//	if (n1 > n2) {
//		printf("%d > %d", n1, n2);
//	}
//	if (n1 == n2) {
//		printf("%d == %d", n1, n2);
//	}
//	if (n1 < n2) {
//		printf("%d < %d", n1, n2);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a, b;
//	printf("정수 두 개를 입력하세요. : ");
//	scanf("%d %d", &a, &b);
//	if (a > b) {
//		printf("입력받은 수 중 큰 수는 %d이고, 작은 수는 %d입니다.", a, b);
//	}
//	if (a < b) {
//		printf("입력받은 수 중 큰 수는 %d이고, 작은 수는 %d입니다.", b, a);
//	}
//
//	return 0;
//}