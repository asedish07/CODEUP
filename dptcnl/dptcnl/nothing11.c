//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int score;
//	printf("������ �Է��ϼ���. : ");
//	scanf("%d", &score);
//
//	if (score >= 90) {
//		printf("A\n");
//	}
//	else if (score >= 80) {
//		printf("B\n");
//	}
//	else if (score >= 70) {
//		printf("C\n");
//	}
//	else if (score >= 60) {
//		printf("D\n");
//	}
//	else {
//		printf("F\n");
//	}
//
//	return 0;
//

// 1.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int dice1, dice2;
//	printf("�ֻ��� �� ���� ���ڸ� �Է��ϼ���.(1~6) : ");
//	scanf("%d %d", &dice1, &dice2);
//	if (dice1 >= 4 && dice2 >= 4) {
//		printf("�̰���ϴ�.");
//	}
//	else if (dice1 < 4 && dice2 < 4) {
//		printf("�����ϴ�.");
//	}
//	else {
//		printf("�����ϴ�.");
//	}
//
//	return 0;
//}

// 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a, b, c;
//	printf("�� ���� ������ �Է��ϼ���. : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a >= b && b >= c || c >= b && b >= a) {
//		printf("�ι�°�� ���� ���� %d�̴�.", b);
//	}
//	else if (b >= a && a >= c || c >= a && a >= b) {
//		printf("�ι�°�� ���� ���� %d�̴�.", a);
//	}
//	//else if (a >= c && c >= b || b >= c && c >= a) {
//	//	printf("�ι�°�� ���� ���� %d�̴�.", c);
//	//}
//	//else if (a == b && b == c) {
//	//	printf("�ι�°�� ���� ���� %d�̴�.", a);
//	//} 
//	//else if (a == b && b > a || a == b && b < a) {
//	//	printf("�ι�°�� ���� ���� %d�̴�.", b);
//	//}
//	//else if (b == c && b<a || b == c || b>a) {
//	//	printf("�ι�°�� ���� ���� %d�̴�.", b);
//	//}
//	//else {
//	//	printf("�ι�°�� ���� ���� %d�̴�.", a);
//	//}
//	else {
//		printf("�ι�°�� ���� ���� %d�̴�.", c);
//	}
//
//	return 0;
//}

// 3.
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//int main(void) {
//	int a;
//	scanf("%d", &a);
//	if (a == 0) {
//		printf("0�̴�.");
//
//		return 0;
//	}
//	if (a > 0) {
//		printf("���\n");
//	}
//	else {
//		printf("����\n");
//	}
//	if (a % 2 == 0) {
//		printf("¦��\n");
//	}
//	else {
//		printf("Ȧ��\n");
//	}
//
//	return 0;
//}

// 4. 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if ((a + b) > c) {
//		printf("�ﰢ�� O");
//	}
//	else {
//		printf("�ﰢ�� X");
//	}
//
//	return 0;
//}

// 5.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stido.h>
//
//int main(void) {
//	int age, fee;
//	printf("�⺻����� �Է����ּ���. : ");
//	scanf("%d", &fee);
//	printf("���̸� �Է��ϼ���. : ");
//	scanf("%d", &age);
//	if (age <= 3 || age >= 65) {
//		printf("������� : 0��");
//	}
//	else if (age >= 4 && age <= 13) {
//		printf("������� : %d��", fee/2);
//	}
//	else if (age >= 14 && age <= 19) {
//		printf("������� : %d��", fee/4)
//	}
//	else {
//		printf("������� : %d��", fee);
//	}
//
//	return 0;
//}

// 6.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int a;
//	printf("������ �Է��ϼ���. : ");
//	scanf("%d");
//	if (a % 4 == 0 && a % 100 != 0) {
//		printf("�����Դϴ�.");
//	}
//	else if (a % 400 == 0) {
//		printf("�����Դϴ�.");
//	}
//	else {
//		printf("������ �ƴմϴ�.");
//	}
//
//	return 0;
//}

// 7.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int x, y;
//	printf("��ǥ�� �Է��ϼ���. : ");
//	scanf("%d %c", &x, &y);
//	if (x > 0 && y > 0) {
//		printf("1��и�");
//	}
//	else if (x < 0 && y > 0) {
//		printf("2��и�");
//	}
//	else if (x < 0 && y < 0) {
//		printf("3��и�");
//	}
//	else if (x == 0 || y == 0) {
//		printf("��и��� �ƴմϴ�.");
//	}
//	else {
//		printf("4��и�");
//	}
//
//	return 0;
//}

// 8.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int dice1, dice2, dice3;
//	printf("�ֻ��� 3���� ���� ���� ���� �Է��ϼ���. : ");
//	scanf("%d %d %d", &dice1, &dice2, &dice3);
//	if (dice1 == dice2 && dice2 == dice3) {
//		printf("%d��", 10000 + dice1 * 1000);
//	}
//	else if (dice1 == dice2 && dice2 != dice3) {
//		printf("%d��", 1000 + 100 * dice1);
//	}
//	else if (dice1 == dice3 && dice3 != dice2) {
//		printf("%d��", 1000 + 100 * dice1);
//	}
//	else if (dice2 == dice3 && dice2 != dice1) {
//		printf("%d��", 1000 + 100 * dice2);
//	}
//	else {
//		if (dice1 > dice2 && dice1 > dice3) {
//			printf("%d��", 100 * dice1);
//		}
//		else if (dice2 > dice1 && dice2 > dice3) {
//			printf("%d��", 100 * dice2);
//		}
//		else {
//			printf("%d��", 100 * dice3);
//		}
//	}
//
//	return 0;
//}