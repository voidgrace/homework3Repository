#include <stdio.h>
#include <stdlib.h>
void main()
{
    int list[5];    //정수형 배열 list 선언
    int *plist[5];  //정수형 포인터 배열 선언 
    list[0] = 10;   //첫번째 배열 10으로 초기화
    list[1] = 11;   //두번째 배열 11으로 초기화
    plist[0] = (int*)malloc(sizeof(int));   //plist에들어갈 주소 할당

    printf("[-----[강은혜][2022041047]-----]\n");

    printf("list[0] \t= %d\n", list[0]);    //배열의 첫번째 원소의 값

    printf("list \t\t= %p\n", list);        //배열의 이름==배열의 첫번째 원소의 주소
    printf("&list[0] \t= %p\n", &list[0]);  

    printf("list + 0 \t= %p\n", list+0);    //연산자와 배열의 이름을 통해 배열의 원소의 주소에 접근(점점 sizeof(int)만큼 증가)
    printf("list + 1 \t= %p\n", list+1);    
    printf("list + 2 \t= %p\n", list+2);    
    printf("list + 3 \t= %p\n", list+3);    
    printf("list + 4 \t= %p\n", list+4);    
    printf("&list[4] \t= %p\n", &list[4]);  
    free(plist[0]);                         //plist에 할당된 메모리 반환
}