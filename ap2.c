#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];    //������ �迭 list ����
    int *plist[5];  //������ ������ �迭 ���� 
    list[0] = 10;   //ù��° �迭 10���� �ʱ�ȭ
    list[1] = 11;   //�ι�° �迭 11���� �ʱ�ȭ
    plist[0] = (int*)malloc(sizeof(int));   //plist���� �ּ� �Ҵ�

    printf("[-----[������][2022041047]-----]\n");

    printf("list[0] \t= %d\n", list[0]);    //�迭�� ù��° ������ ��

    printf("list \t\t= %p\n", list);        //�迭�� �̸�==�迭�� ù��° ������ �ּ�
    printf("&list[0] \t= %p\n", &list[0]);  

    printf("list + 0 \t= %p\n", list+0);    //�����ڿ� �迭�� �̸��� ���� �迭�� ������ �ּҿ� ����(���� sizeof(int)��ŭ ����)
    printf("list + 1 \t= %p\n", list+1);    
    printf("list + 2 \t= %p\n", list+2);    
    printf("list + 3 \t= %p\n", list+3);    
    printf("list + 4 \t= %p\n", list+4);    
    printf("&list[4] \t= %p\n", &list[4]);  
    free(plist[0]);                         //plist�� �Ҵ�� �޸� ��ȯ
}