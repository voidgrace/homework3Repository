#include <stdio.h>
#include <stdlib.h>
void main()
{

    int list[5];                //배열선언
    int *plist[5] = {NULL,};    //배열포인터 선언
    
    plist[0] = (int *)malloc(sizeof(int));//plist에들어갈 주소 할당
    list[0] = 1;                //list 첫번째 원소 1으로 초기화
    list[1] = 100;              //list 두번째 원소 100으로 초기화
    *plist[0] = 200;            //plist가 가리키는 배열의 첫번째 원소를 200으로 초기화
    
    printf("[-----[강은혜][2022041047]-----]\n");

    printf("list[0] = %d\n", list[0]);      //list의 첫번째 원소의 값
    printf("&list[0] = %p\n", &list[0]);    //list의 첫번째 원소의 주소
    printf("list = %p\n", list);            //list의 첫번째 원소의 주소:배열의 이름
    printf("&list = %p\n", &list);          //list의 첫번째 원소의 주소:배열 list의 주소
    printf("----------------------------------------\n\n");
    printf("list[1] = %d\n", list[1]);      //list의 두번째 원소의 값
    printf("&list[1] = %p\n", &list[1]);    //list의 두번째 원소의 주소
    printf("*(list+1) = %d\n", *(list + 1));//list의 두번째 원소의 값:포인터와 배열의 이름을 활용
    printf("list+1 = %p\n", list+1);        //list의 두번째 원소의 주소:배열의 이름
    printf("----------------------------------------\n\n"); 
    printf("*plist[0] = %d\n", *plist[0]);  //plist가 가리키는 배열의 첫번째 원소의 값s
    printf("&plist[0] = %p\n", &plist[0]);  //plist가 가리키는 배열의 첫번째 원소의 주소
    printf("&plist = %p\n", &plist);        //plist가 가리키는 배열의 첫번째 원소의 주소
    printf("plist = %p\n", plist);          //배열포인터 plist의 주소

    printf("plist[0] = %p\n", plist[0]);    //plist가 가리키는 배열의 첫번째 원소 값
    printf("plist[1] = %p\n", plist[1]);    //plist가 가리키는 배열의 두번째 원소 값
    printf("plist[2] = %p\n", plist[2]);    //plist가 가리키는 배열의 세번째 원소 값
    printf("plist[3] = %p\n", plist[3]);    //plist가 가리키는 배열의 네번째 원소 값
    printf("plist[4] = %p\n", plist[4]);    //plist가 가리키는 배열의 다섯번째 원소 값
    free(plist[0]); //plist에 할당한 주소 반환

}