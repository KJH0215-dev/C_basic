#include<stdio.h>
int main(void) {
	//여러 줄 주석처리는 /*(코드)*/
	/*/int age = 20;
	int born = 2006;
	printf("%d, %d\n", age, born);
	age = 21;
	printf("%d", age);*/

	//printf("2\n"); //한 줄 주석 처리는 //
	
	/*/float weight = 46.5f;
	printf("%.2f", weight); (n은 출력할 소수점 이하의 자릿수, n+1에서 반올림)
	double d = 4.428;		(float형의 변수에만 뒤에 f 를 붙인다. WHY?: float은 4바이트 double은 8바이트를 인식, f안찍으면 컴퓨터가 헷갈려함.)
	printf("%.3f", d);*/

	/*printf("My name is KJH\n");
	printf("I am 21years old\n");*/

	/*int a = 10;
	int b = 3;
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);("/"의 의미는 나누기 출력 하지만 소수가 안나오는 이유는 %d가 정수 값만을 출력하기 때문)
	*/

	/*/int integer = 237;
	float real_number = 43.25;
	
	printf("%d\n", integer);
	printf("%6d\n", integer);
	printf("%-6d\n", integer );

	printf("%f\n", real_number);
	printf("%.2f\n", real_number);
	printf("%6.2f\n", real_number);*/

	int age, length, weight;
	char name;
	scanf_s("%d, %d, %d, %c", &age, &length, &weight, &name);
	printf("age = %d\nlength = %d\nweight = %d\nname = %c%c%c\n", age, length, weight, name);

	return 0;
}