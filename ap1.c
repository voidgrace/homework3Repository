#include <stdio.h>
#include <stdlib.h>
void main()
{

    int list[5];                //�迭����
    int *plist[5] = {NULL,};    //�迭������ ����
    
    plist[0] = (int *)malloc(sizeof(int));//plist���� �ּ� �Ҵ�
    list[0] = 1;                //list ù��° ���� 1���� �ʱ�ȭ
    list[1] = 100;              //list �ι�° ���� 100���� �ʱ�ȭ
    *plist[0] = 200;            //plist�� ����Ű�� �迭�� ù��° ���Ҹ� 200���� �ʱ�ȭ
    
    printf("[-----[������][2022041047]-----]\n");

    printf("list[0] = %d\n", list[0]);      //list�� ù��° ������ ��
    printf("&list[0] = %p\n", &list[0]);    //list�� ù��° ������ �ּ�
    printf("list = %p\n", list);            //list�� ù��° ������ �ּ�:�迭�� �̸�
    printf("&list = %p\n", &list);          //list�� ù��° ������ �ּ�:�迭 list�� �ּ�
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);      //list�� �ι�° ������ ��
    printf("&list[1] = %p\n", &list[1]);    //list�� �ι�° ������ �ּ�
    printf("*(list+1) = %d\n", *(list + 1));//list�� �ι�° ������ ��:�����Ϳ� �迭�� �̸��� Ȱ��
    printf("list+1 = %p\n", list+1);        //list�� �ι�° ������ �ּ�:�迭�� �̸�
    printf("----------------------------------------\n\n"); 
    printf("*plist[0] = %d\n", *plist[0]);  //plist�� ����Ű�� �迭�� ù��° ������ ��s
    printf("&plist[0] = %p\n", &plist[0]);  //plist�� ����Ű�� �迭�� ù��° ������ �ּ�
    printf("&plist = %p\n", &plist);        //plist�� ����Ű�� �迭�� ù��° ������ �ּ�
    printf("plist = %p\n", plist);          //�迭������ plist�� �ּ�

    printf("plist[0] = %p\n", plist[0]);    //plist�� ����Ű�� �迭�� ù��° ���� ��
    printf("plist[1] = %p\n", plist[1]);    //plist�� ����Ű�� �迭�� �ι�° ���� ��
    printf("plist[2] = %p\n", plist[2]);    //plist�� ����Ű�� �迭�� ����° ���� ��
    printf("plist[3] = %p\n", plist[3]);    //plist�� ����Ű�� �迭�� �׹�° ���� ��
    printf("plist[4] = %p\n", plist[4]);    //plist�� ����Ű�� �迭�� �ټ���° ���� ��
    free(plist[0]); //plist�� �Ҵ��� �ּ� ��ȯ

}