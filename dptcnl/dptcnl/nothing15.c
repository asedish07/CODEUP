// 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int natural;
//	do {
//		printf("�ڿ����� �Է��ϼ���(����� 0): ");
//		scanf("%d", &natural);
//		if (natural % 2 == 0) {
//			printf("%d�� ¦��!\n", natural);
//		}
//		else {
//			printf("%d�� Ȧ��!\n", natural);
//		}
//		if (natural == 0) {
//			printf("�����մϴ�!");
//		}
//	} while (natural != 0);
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int num1, num2;
//	do {
//		printf("�� ���� ���� ������ �ݺ��ϴ� ���α׷�\n");
//		printf("num1 : ");
//		scanf("%d", &num1);
//		printf("num2 : ");
//		scanf("%d", &num2);
//	} while (num1 != num2);
//
//	return 0;
//}

// 3. (���� 1110��)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int inputandnext, ten, one, sum, count=0, original;
//	scanf("%d", &inputandnext);
//	original = inputandnext;
//	do {
//		ten = inputandnext / 10;
//		one = inputandnext % 10;
//		sum = ten + one;
//		inputandnext = one * 10 + sum % 10;
//		count++;
//		//count++;
//		//inputandnext = ((inputandnext % 10 + temp / 10) % 10) + (inputandnext % 10) * 10;
//	} while (original != inputandnext);
//	printf("%d", count);
//
//	return 0;
//}

// 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n, sum = 0, cnt = 0;
//	while(1) {
//		scanf("%d", &n);
//		if (n == 0) break;
//		if (n % 2 == 0) continue;
//		sum += n;
//		cnt++;
//	}
//	printf("Ȧ���� �� : %d\nȦ���� ��� : %d", sum, sum/cnt);
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int integar;
//	scanf("%d", &integar);
//	for (int i = 1; i <= integar; i++) {
//		if (i % 3 == 0) continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}

// 3. (���� 2839��)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int N;
//	scanf("%d", &N);
//	
//
//	return 0;
//}