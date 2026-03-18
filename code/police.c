#include <stdio.h>
int main() {
	unsigned int age;
	double weight, height;
	char name[512], what[512];


	printf("이름을 입력하세요. :");
	scanf_s("%s", name, (unsigned)sizeof(name));

	printf("나이를 입력하세요. : ");
	scanf_s("%d", &age);

	printf("몸무게를 입력하세요. : ");
	scanf_s("%lf", &weight);

	printf("키를 입력하세요. :");
	scanf_s("%lf", &height);

	printf("범죄명을 입력하세요. : ");
	scanf_s("%s", what, (unsigned)sizeof(what));

	printf("\n========= %s 의 기록========\n", name);
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %lf\n", weight);
	printf("키 : %lf\n", height);
	printf("범죄명 : %s\n", what);


	return 0;
}