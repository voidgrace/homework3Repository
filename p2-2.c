#include <stdio.h>
void print_one(int *ptr, int rows);
int main()
{
    int one[] = {0, 1, 2, 3, 4};
    printf("[-----[강은혜][2022041047]-----]\n");

    printf("one = %p\n", one);       //one==&one==&one[0](배열의 첫번째 원소 주소 출력)
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n");
    printf(" print_one(&one[0], 5) \n");
    printf("------------------------------------\n");
    print_one(&one[0], 5);       //배열의 주소를 인자로 전달 / 참조에 의한 호출
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n"); 
    printf("------------------------------------\n");
    print_one(one, 5);           //배열의 이름을 인자로 전달 / 참조에 의한 호출
    return 0;
}
void print_one(int *ptr, int rows)
{
    int i;
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));//포인터를 통해 배열의 원소의 주소 및 값을 출력 
        printf("\n");
}