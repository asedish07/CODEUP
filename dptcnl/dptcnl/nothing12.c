//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("1. 삽입\n2. 수정\n3. 삭제\n숫자를 선택하세요. : ");
//	scanf("%d", &num);
//
//	switch (num){
//	case 1:
//		printf("삽입을 선택하였습니다.\n");
//		break;
//	case 2:
//		printf("수정을 선택하였습니다.\n");
//		break;
//	case 3:
//		printf("삭제를 선택하였습니다.\n");
//		break;
//	default:
//		printf("1~3중의 숫자를 누르세요.\n");
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
//	printf("영어 소문자를 입력하세요. : ");
//	scanf("%c", &alp);
//
//	switch (alp) {
//	case 'a':
//	case 'e':
//	case 'i':
//	case 'o':
//	case 'u':
//		printf("입력한 %c는 모음입니다.\n", alp);
//		break;
//	default:
//		printf("입력한 %c는 자음입니다.\n", alp);
//	}
//
//	return 0;
//}

// 예제 1.
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
//		printf("ERROR : 산술연산자가 아닙니다.");
//	}
//
//	return 0;
//}

// 예제 +)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char month;
//	scanf("%c", &month);
//	switch (month) {
//	case '2':
//		printf("28일");
//		break;
//	case 1:
//	case 3:
//	case 5:
//	case '7':
//	case '8':
//	case '10':
//	case '12':
//		printf("31일");
//		break;
//	default:
//		printf("30일");
//	}
//
//	return 0;
//}

// 예제 2.
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	int fee, age;
//	printf("기본 요금을 ")
//
//	return 0;
//}

// 예제 3.
// while문 실행 : 1
// while문 실행 : 2
// while문 실행 : 3
// while문 실행 : 4
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
//	printf("정수 입력 : ");
//	scanf("%d", &n);
//	while (1) {
//		if (i > n) {
//			break;
//		}
//		a = a + i;
//		i++;
//	}
//	printf("1부터 %d까지의 합 : %d", n, a);
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
//		printf("점수는? ");
//		scanf("%d", &score);
//		if (score >= 80 && score<=100) {
//			printf("합격!\n");
//		}
//		else if (score<80 && score>=0) {
//			printf("불합격!\n");
//		}
//		else {
//			printf("이외의 숫자를 입력하였습니다. (종료)");
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
//			printf("100이상의 수를 입력했습니다. (종료)\n");
//			break;
//		}
//	}
//	printf("합계 : %d\n", sum);
//	printf("평균 : %.1lf\n", (double) sum/counter);
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