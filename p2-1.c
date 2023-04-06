#include <stdio.h>
#define MAX_SIZE 100 //최대값 == 100
float sum1(float list[], int);     //배열 전달
float sum2(float *list, int);       //포인터로 배열전달
float sum3(int n, float *list);      //인자호출 순서에 따른 주소 할당
float input[MAX_SIZE], answer;      
int i;                              
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;               //배열 input 초기화

    /* for checking call by reference */
    printf("[-----[강은혜][2022041047]-----]\n");
    
    //평범한 배열 인자 전달
    printf("--------------------------------------\n"); 
    printf(" sum1(input, MAX_SIZE) \n");                    
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);                     
    printf("The sum is: %f\n\n", answer);              

    //배열, 정수 순으로 인자 전달
    printf("The sum is: %f\n\n", answer);               
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");                
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);                    
    answer = sum2(input, MAX_SIZE);                     
    printf("The sum is: %f\n\n", answer);              

    // 정수, 배열 순으로 인자 전달
    printf("The sum is: %f\n\n", answer);               
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");            
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);                    

    answer = sum3(MAX_SIZE, input);                     
    printf("The sum is: %f\n\n", answer);              
}

float sum1(float list[], int n)         //list의 합을 반환하는 함수
{
    printf("list\t= %p\n", list);       //list의 원래 배열 input의 주소                    
    printf("&list\t= %p\n\n", &list);   //sum1함수의 지역변수 list의 주소 
    
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)                //배열의 합 계산              
    tempsum += list[i];                                 
    
    return tempsum;                     //배열의 합 반환
    }
float sum2(float *list, int n)          //배열,정수 순으로 메모리 할당
{
    printf("list\t= %p\n", list);       //list의 원래 배열 input의 주소                      
    printf("&list\t= %p\n\n", &list);   //sum2함수의 지역변수 list의 주소                    
    
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)                //배열의 합 계산                       
    tempsum += *(list +i);                              
    
    return tempsum;                     //배열의 합 반환                                   
    }
    /* stack variable reuse test */
float sum3(int n, float *list)          //정수, 배열 순으로 메모리할당     
{
    printf("list\t= %p\n", list);       //list의 원래 배열 input의 주소                      
    printf("&list\t= %p\n\n", &list);   //sum3함수의 지역변수 list의 주소  //n이 더 먼저 선언되어, sum2와 다름
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)                //배열의 합 계산
    tempsum += *(list +i);                              
    return tempsum;                     //배열의 합 반환
    }
