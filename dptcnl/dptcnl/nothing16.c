// 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		printf("%d´Ü\n", i);
//		for (j = 1; j <= 9; j++) {
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 3.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 4.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i >= 1; i--) {
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 5.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = i; j >= 1; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 6.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n, i, j;
//	scanf("%d", &n);
//	for (i = n; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n; i++) {
//		for (j = i; j >= 1; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 7.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n;
//	scanf("%x", &n);
//	for (int i = 1; i <= n; i++) {
//		for (int k = n; k>=i+1; k--) {
//			printf(" ");
//		}
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 8.
//#define _crt_no_warnings
//#include <stdio.h>
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = n; i >= 1; i--) {
//		for (int k = n; k >= i+1; k--) {
//			printf(" ");
//		}
//		for (int j = 1; j <= i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 9.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, k;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		for (k = 1; k <= n - i; k++) {
//			printf(" ");
//		}
//		for (int j = 1; j <= n + i - k; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 10.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n, i, j, k;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (k = 1; k <= i - 1; k++) {
//			printf(" ");
//		}
//		for (j = n + 6 - i - k; j >= 1; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 11.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, i, j, k;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (k = n - i; k >= 1; k--) {
//			printf(" ");
//		}
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n - 1; i++) {
//		for (k = 1; k <= i; k++) {
//			printf(" ");
//		}
//		for (j = 1; j <= n - i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 12.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(){
//	int n, i, j, k;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n - i; j++) {
//			printf(" ");
//		}
//		for (k = 1; k <= i*2-1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n - 1; i++) {
//		for (j = 1; j <= i; j++) {
//			printf(" ");
//		}
//		for (k = 1; k <= (n-i)*2-1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 13.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, i, space, j;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (space = 1; space <= i - 1; space++) {
//			printf(" ");
//		}
//		for (j = 1; j <= (n - i) * 2 + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n-1; i++) {
//		for (space = 1; space <= n - i - 1; space++) {
//			printf(" ");
//		}
//		for (j = 1; j <= i*2+1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 14.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int n, i, j, k, s;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("*");
//		}
//		for (s = 1; s <= n*2 - 2 * i; s++) {
//			printf(" ");
//		}
//		for (k = 1; k <= i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= n - 1; i++) {
//		for (j = 1; j <= n - i; j++) {
//			printf("*");
//		}
//		for (s = 1; s <= i * 2; s++) {
//			printf(" ");
//		}
//		for (k = 1; k <= n - i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}