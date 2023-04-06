#include <stdio.h>
struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */  //가장큰 자료형인 int의 크기 4byte를 기준으로 할당
    short grade; /* 2 bytes */      
    };
int main()
{
    printf("[-----[강은혜][2022041047]-----]\n");
    struct student pst;
    
    printf("size of student = %ld\n", sizeof(struct student));  // padding: 19byte가 아닌 배수가 되는 16+4+4=24byte로 할당

    printf("size of int = %ld\n", sizeof(int));                 
    printf("size of short = %ld\n", sizeof(short));             //padding되지 않은 자료형의 원래 크기 
    return 0;
}