// ���� 1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int nArr[5];
//	int i;
//
////	nArr[0] = 10, nArr[1] = 20, nArr[2] = 30, nArr[3] = 40, nArr[4] = 50;
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &nArr[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		printf("nArr[%d] = %d\n", i, nArr[i]);
//	}
//
//	return 0;
//}

// ���� 2
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int nArr1[5] = { 10, 20, 30, 40, 50 };
//	int nArr2[5] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 5; i++) {
//		nArr2[i] = nArr1[i];
//	}
//
//	for (i = 0; i < 5; i++) {
//		printf("nArr2[%d] : %d\n", i, nArr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

// ���� 3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char str[18] = "Nice to meet you!";
//	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
//	printf("NULL ���� ������ ��� : %c\n", str[17]);
//	printf("NULL ���� ������ ��� : %d\n", str[17]);
//
//	str[16] = '?';
//	printf("���ڿ� ��� : %s\n", str);
//
//	return 0;
//}

// ���� 4
// ���� ��� : 0 \n 32
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char nu = '\0';
//	char sp = ' ';
//	printf("null���� �ƽ�Ű�ڵ� ���� : %d\n", nu);
//	printf("������ �ƽ�Ű�ڵ� ���� : %d\n", sp);
//
//	return 0;
//}

// 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int input[6], i;
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &input[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", input[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", input[i]);
//	}
//
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char input[6];
//	int i;
//	printf("���� �Է� : ");
//	for (i = 0; i < 5; i++) {
//		scanf(" %c", &input[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%c ", input[i]);
//	}
//
//	return 0;
//}

// 3.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int cnt = 0;
//	char sName[100], sNum[10];
//	printf("�̸��� ����� �Է��ϼ��� : ");
//	scanf("%s", &sName);
//	printf("�й��� �Է��ϼ��� : ");
//	scanf("%s", &sNum);
//
//	while (sName[cnt] != '\0') {
//		cnt++;
//	}
//
//	printf("����� �̸��� %s(%d����)�̰� �й��� %s�Դϴ�.", sName, cnt, sNum);
//
//	return 0;
//}

// 4.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//
//	return 0;
//}