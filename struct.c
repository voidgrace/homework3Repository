#include <stdio.h>//ǥ������� ���̺귯��
#include <string.h>//not working�̽��� �ذ��ϱ� ���� strcmp�Լ��� �������� ���̺귯��
struct student1 {
    char lastName;
    int studentId;
    char grade;
};                      //�Ϲ����� ����ü
typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;             //����������ڷ����� ���� ������ ����ü ���� ����

int main() {
    printf("[-----[������][2022041047]-----]\n");

    struct student1 st1 = {'A', 100, 'A'};      //�Ϲ��� ����ü ���� �� �ʱ�ȭ 
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};            //typedef�� ����ü ���� �� �ʱ�ȭ
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;               
    st3 = st2;      //���� �����ڸ� ���� st3�� st2�� ����
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    /* equality test */
    if((st3.lastName==st2.lastName)&&(st3.studentId==st2.studentId)&&(st3.grade==st2.grade)) // not working! ����ü�� ��°�� �� �Ұ�, ����ü�� ������ ������ ����
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;

}