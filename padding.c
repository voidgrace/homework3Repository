#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */  //����ū �ڷ����� int�� ũ�� 4byte�� �������� �Ҵ�
    short grade; /* 2 bytes */      
    };
int main()
{
    printf("[-----[������][2022041047]-----]\n");
    struct student pst;
    
    printf("size of student = %ld\n", sizeof(struct student));  // padding: 19byte�� �ƴ� ����� �Ǵ� 16+4+4=24byte�� �Ҵ�

    printf("size of int = %ld\n", sizeof(int));                 
    printf("size of short = %ld\n", sizeof(short));             //padding���� ���� �ڷ����� ���� ũ�� 
    return 0;
}