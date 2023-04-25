// 예제 1
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

// 예제 2
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

// 예제 3
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	char str[18] = "Nice to meet you!";
//	printf("배열 str의 크기 : %d\n", sizeof(str));
//	printf("NULL 문자 문자형 출력 : %c\n", str[17]);
//	printf("NULL 문자 정수형 출력 : %d\n", str[17]);
//
//	str[16] = '?';
//	printf("문자열 출력 : %s\n", str);
//
//	return 0;
//}

// 예제 4
// 예상 결과 : 0 \n 32
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//	char nu = '\0';
//	char sp = ' ';
//	printf("null값의 아스키코드 값은 : %d\n", nu);
//	printf("공백의 아스키코드 값은 : %d\n", sp);
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
//	printf("문자 입력 : ");
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
//	printf("이름을 영어로 입력하세요 : ");
//	scanf("%s", &sName);
//	printf("학번을 입력하세요 : ");
//	scanf("%s", &sNum);
//
//	while (sName[cnt] != '\0') {
//		cnt++;
//	}
//
//	printf("당신의 이름은 %s(%d글자)이고 학번은 %s입니다.", sName, cnt, sNum);
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