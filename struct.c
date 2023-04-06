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

    struct student1 st1 = {'A', 100, 'A'};          //구조체 선언 및 초기화 
    printf("st1.lastName = %c\n", st1.lastName);    //이름
    printf("st1.studentId = %d\n", st1.studentId);  //학번
    printf("st1.grade = %c\n", st1.grade);          //학년

    student2 st2 = {'B', 200, 'B'};                 //typedef로 구조체 선언 및 초기화
    printf("\nst2.lastName = %c\n", st2.lastName);  //이름
    printf("st2.studentId = %d\n", st2.studentId);  //학번
    printf("st2.grade = %c\n", st2.grade);          //학년

    student2 st3;               
    st3 = st2;                                      //대입 연산자를 통해 st3에 st2을 복사
    printf("\nst3.lastName = %c\n", st3.lastName);  //이름
    printf("st3.studentId = %d\n", st3.studentId);  //학번
    printf("st3.grade = %c\n", st3.grade);          //학년

    /* equality test */
    if((st3.lastName==st2.lastName)&&(st3.studentId==st2.studentId)&&(st3.grade==st2.grade)) // not working! 구조체를 통째로 비교 불가, 구조체속 멤버변수 일일이 대조
        printf("equal\n");//같으면 equal 출력
    else
        printf("not equal\n");//다르면 not equal 출
    return 0;

}
