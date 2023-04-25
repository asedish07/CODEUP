//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int score;
//	printf("점수를 입력하세요. : ");
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
//	printf("주사위 두 개의 숫자를 입력하세요.(1~6) : ");
//	scanf("%d %d", &dice1, &dice2);
//	if (dice1 >= 4 && dice2 >= 4) {
//		printf("이겼습니다.");
//	}
//	else if (dice1 < 4 && dice2 < 4) {
//		printf("졌습니다.");
//	}
//	else {
//		printf("비겼습니다.");
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
//	printf("세 개의 정수를 입력하세요. : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a >= b && b >= c || c >= b && b >= a) {
//		printf("두번째로 작은 수는 %d이다.", b);
//	}
//	else if (b >= a && a >= c || c >= a && a >= b) {
//		printf("두번째로 작은 수는 %d이다.", a);
//	}
//	//else if (a >= c && c >= b || b >= c && c >= a) {
//	//	printf("두번째로 작은 수는 %d이다.", c);
//	//}
//	//else if (a == b && b == c) {
//	//	printf("두번째로 작은 수는 %d이다.", a);
//	//} 
//	//else if (a == b && b > a || a == b && b < a) {
//	//	printf("두번째로 작은 수는 %d이다.", b);
//	//}
//	//else if (b == c && b<a || b == c || b>a) {
//	//	printf("두번째로 작은 수는 %d이다.", b);
//	//}
//	//else {
//	//	printf("두번째로 작은 수는 %d이다.", a);
//	//}
//	else {
//		printf("두번째로 작은 수는 %d이다.", c);
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
//		printf("0이다.");
//
//		return 0;
//	}
//	if (a > 0) {
//		printf("양수\n");
//	}
//	else {
//		printf("음수\n");
//	}
//	if (a % 2 == 0) {
//		printf("짝수\n");
//	}
//	else {
//		printf("홀수\n");
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
//		printf("삼각형 O");
//	}
//	else {
//		printf("삼각형 X");
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
//	printf("기본요금을 입력해주세요. : ");
//	scanf("%d", &fee);
//	printf("나이를 입력하세요. : ");
//	scanf("%d", &age);
//	if (age <= 3 || age >= 65) {
//		printf("최종요금 : 0원");
//	}
//	else if (age >= 4 && age <= 13) {
//		printf("최종요금 : %d원", fee/2);
//	}
//	else if (age >= 14 && age <= 19) {
//		printf("최종요금 : %d원", fee/4)
//	}
//	else {
//		printf("최종요금 : %d원", fee);
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
//	printf("연도를 입력하세요. : ");
//	scanf("%d");
//	if (a % 4 == 0 && a % 100 != 0) {
//		printf("윤년입니다.");
//	}
//	else if (a % 400 == 0) {
//		printf("윤년입니다.");
//	}
//	else {
//		printf("윤년이 아닙니다.");
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
//	printf("좌표를 입력하세요. : ");
//	scanf("%d %c", &x, &y);
//	if (x > 0 && y > 0) {
//		printf("1사분면");
//	}
//	else if (x < 0 && y > 0) {
//		printf("2사분면");
//	}
//	else if (x < 0 && y < 0) {
//		printf("3사분면");
//	}
//	else if (x == 0 || y == 0) {
//		printf("사분면이 아닙니다.");
//	}
//	else {
//		printf("4사분면");
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
//	printf("주사위 3개를 굴려 나온 눈을 입력하세요. : ");
//	scanf("%d %d %d", &dice1, &dice2, &dice3);
//	if (dice1 == dice2 && dice2 == dice3) {
//		printf("%d원", 10000 + dice1 * 1000);
//	}
//	else if (dice1 == dice2 && dice2 != dice3) {
//		printf("%d원", 1000 + 100 * dice1);
//	}
//	else if (dice1 == dice3 && dice3 != dice2) {
//		printf("%d원", 1000 + 100 * dice1);
//	}
//	else if (dice2 == dice3 && dice2 != dice1) {
//		printf("%d원", 1000 + 100 * dice2);
//	}
//	else {
//		if (dice1 > dice2 && dice1 > dice3) {
//			printf("%d원", 100 * dice1);
//		}
//		else if (dice2 > dice1 && dice2 > dice3) {
//			printf("%d원", 100 * dice2);
//		}
//		else {
//			printf("%d원", 100 * dice3);
//		}
//	}
//
//	return 0;
//}