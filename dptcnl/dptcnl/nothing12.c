//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("1. ����\n2. ����\n3. ����\n���ڸ� �����ϼ���. : ");
//	scanf("%d", &num);
//
//	switch (num){
//	case 1:
//		printf("������ �����Ͽ����ϴ�.\n");
//		break;
//	case 2:
//		printf("������ �����Ͽ����ϴ�.\n");
//		break;
//	case 3:
//		printf("������ �����Ͽ����ϴ�.\n");
//		break;
//	default:
//		printf("1~3���� ���ڸ� ��������.\n");
//		break;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char alp;
//	printf("���� �ҹ��ڸ� �Է��ϼ���. : ");
//	scanf("%c", &alp);
//
//	switch (alp) {
//	case 'a':
//	case 'e':
//	case 'i':
//	case 'o':
//	case 'u':
//		printf("�Է��� %c�� �����Դϴ�.\n", alp);
//		break;
//	default:
//		printf("�Է��� %c�� �����Դϴ�.\n", alp);
//	}
//
//	return 0;
//}

// ���� 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n1, n2;
//	char m1;
//	scanf("%d %c %d", &n1, &m1, &n2);
//	switch (m1) {
//	case '+':
//		printf("%d", n1 + n2);
//		break;
//	case '-':
//		printf("%d", n1 - n2);
//		break;
//	case '*':
//		printf("%d", n1 * n2);
//		break;
//	case '/':
//		printf("%d", n1 / n2);
//		break;
//	case '%':
//		printf("%d", n1 % n2);
//		break;
//	default:
//		printf("ERROR : ��������ڰ� �ƴմϴ�.");
//	}
//
//	return 0;
//}

// ���� +)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char month;
//	scanf("%c", &month);
//	switch (month) {
//	case '2':
//		printf("28��");
//		break;
//	case 1:
//	case 3:
//	case 5:
//	case '7':
//	case '8':
//	case '10':
//	case '12':
//		printf("31��");
//		break;
//	default:
//		printf("30��");
//	}
//
//	return 0;
//}

// ���� 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int fee, age;
//	printf("�⺻ ����� ")
//
//	return 0;
//}

// ���� 3.
// while�� ���� : 1
// while�� ���� : 2
// while�� ���� : 3
// while�� ���� : 4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int num = 1;
//	while 
//
//	return 0;
//}

// 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int i = 1, num;
//	scanf("%d", &num);
//	while (i <= num) {
//		printf("%d  ", i);
//		i++;
//	}
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int alph = 65;
//	int num;
//	scanf("%d", &num);
//	while (alph <= num) {
//		printf("%c ", alph);
//		alph++;
//	}
//
//	return 0;
//}

// 3.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int n,i=1, a=0;
//	printf("���� �Է� : ");
//	scanf("%d", &n);
//	while (1) {
//		if (i > n) {
//			break;
//		}
//		a = a + i;
//		i++;
//	}
//	printf("1���� %d������ �� : %d", n, a);
//
//	return 0;
//}

// 4.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (a < b) {
//		while (a<=b) {
//			printf("%d ", a++);
//		}
//	}
//	else {
//		while (a>=b) {
//			printf("%d ", b++);
//		}
//	}
//
//	return 0;
//}

// 5.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int alpabet1, alpabet2;
//	scanf("%c %c", &alpabet1, &alpabet2);
//	while (alpabet1 <= alpabet2)	printf("%c ", alpabet1++);
//
//	return 0;
//}

// 6.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int score;
//	while (1) {
//		printf("������? ");
//		scanf("%d", &score);
//		if (score >= 80 && score<=100) {
//			printf("�հ�!\n");
//		}
//		else if (score<80 && score>=0) {
//			printf("���հ�!\n");
//		}
//		else {
//			printf("�̿��� ���ڸ� �Է��Ͽ����ϴ�. (����)");
//			break;
//		}
//	}
//
//	return 0;
//}

// 7.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int integar, sum = 0, counter = 0;
//	while (1) {
//		scanf("%d", &integar);
//		if (integar <= 100) {
//			sum += integar;
//			counter++;
//		}
//		else {
//			printf("100�̻��� ���� �Է��߽��ϴ�. (����)\n");
//			break;
//		}
//	}
//	printf("�հ� : %d\n", sum);
//	printf("��� : %.1lf\n", (double) sum/counter);
//
//	return 0;
//}

// 8.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int num, over=0, num1=1;
//	scanf("%d", &num);
//	while (1) {
//		over += num1;
//		if (num < over) {
//			break;
//		}
//		num1++;
//	}
//	printf("%d", over);
//
//	return 0;
//}