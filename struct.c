#include <stdio.h>//표준입출력 라이브러리
#include <string.h>//not working이슈를 해결하기 위한 strcmp함수를 쓰기위한 라이브러리
struct student1 {
    char lastName;
    int studentId;
    char grade;
};                      //일반적인 구조체
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;             //사용자정의자료형을 통해 간편한 구조체 선언 가능

int main() {
    printf("[-----[강은혜][2022041047]-----]\n");

    struct student1 st1 = {'A', 100, 'A'};      //일반적 구조체 선언 및 초기화 
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};            //typedef로 구조체 선언 및 초기화
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;               
    st3 = st2;      //대입 연산자를 통해 st3에 st2을 복사
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    if((st3.lastName==st2.lastName)&&(st3.studentId==st2.studentId)&&(st3.grade==st2.grade)) // not working! 구조체를 통째로 비교 불가, 구조체속 데이터 일일이 대조
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;

}