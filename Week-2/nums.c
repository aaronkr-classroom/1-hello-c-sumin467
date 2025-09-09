#include <stdio.h>
#include <limits.h> // �ִ� �� /�ּ� �� �� ��

int main(void) {
	//char 1byte(����)
	char ch = 'A';
	printf("char\n");
	printf("Value: %c\n",ch);
	printf("Max: %d\n",CHAR_MAX); //limit.h
	printf("Min: %d\n",CHAR_MIN);

	//signed short int 2byte(����)
	signed short int sshort = 1234;
	printf("\nsigned short int\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); //limit.h
	printf("Min: %d\n", SHRT_MIN);

	//unsigned short int 2byte(����)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX); //limit.h

	//signed int 4byte(����)
	signed int sint = 1234;
	printf("\nsigned int\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); //limit.h
	printf("Min: %d\n", INT_MIN);

	//unsigned int 4byte(����)
	unsigned int uint = 123456U;
	printf("\nunsigned int\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX); //limit.h
	
	//long�� �ٸ� �ü������ �ٸ� ����Ʈ ũ���Դϴ�.
	// ���� 4����Ʈ�ε� Linux/
	// 
	//singed long int 4byte(����)
	signed long int slong = 123456789L;
	printf("\nsigned long int\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX); //limit.h
	printf("Min: %d\n", LONG_MIN);

	//unsinged long int 4byte(����)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX); //limit.h
	//flaot 4byte(�Ǽ�)
	float f = 123.456f;
	printf("\nfloat\n");
	printf("Value: %f\n", f);
	//printf("Max: %d\n", _MAX); //limit.h
	//printf("Min: %d\n", LONG_MIN);
	
	//double 8byte(�Ǽ�)
	double d = 123456.7890123f;
	printf("\ndouble\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", _MAX); //limit.h
	//printf("Min: %d\n", LONG_MIN);
	return 0;
}