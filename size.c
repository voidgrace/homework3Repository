#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x;//���������� ���� ����
    printf("[-----[������][2022041047]-----]\n");

    printf("sizeof(x) = %lu\n", sizeof(x));     //���������� ������ ũ�� : 4B
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //���������Ͱ� ����Ű�� �����ͺ����� ũ�� : 4B
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //���������Ͱ� ����Ű�� �����ͺ����� ����Ű�� ������ ũ�� : 4B
}