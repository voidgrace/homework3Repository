#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
    int one[] = {0, 1, 2, 3, 4};
    printf("[-----[������][2022041047]-----]\n");

    printf("one = %p\n", one);       //one==&one==&one[0](�迭�� ù��° ���� �ּ� ���)
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);       //�迭�� �ּҸ� ���ڷ� ���� / ������ ���� ȣ��
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); 
    printf("------------------------------------\n");
    print_one(one, 5);           //�迭�� �̸��� ���ڷ� ���� / ������ ���� ȣ��
    return 0;
}
void print_one(int *ptr, int rows)
{
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));//�����͸� ���� �迭�� ������ �ּ� �� ���� ��� 
        printf("\n");
}