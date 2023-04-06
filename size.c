#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;//이중포인터 변수 선언
    printf("[-----[강은혜][2022041047]-----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));     //이중포인터 변수의 크기 : 4B(=주소가 4B)
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //이중포인터가 가리키는 포인터변수의 크기 : 4B(=주소가 4B)
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //이중포인터가 가리키는 포인터변수가 가리키는 변수의 크기 : 4B
}
