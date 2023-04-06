#include <stdio.h>
#define MAX_SIZE 100 //최대값 == 100
float sum1(float list[], int);     //함수 주소
float sum2(float *list, int);       //함수 포인터
float sum3(int n, float *list);      //인자호출 순서에 따른 주소 할당
float input[MAX_SIZE], answer;      
int i;                              
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;               //배열 input 초기화

    /* for checking call by reference */
    printf("[-----[강은혜][2022041047]-----]\n");
    
    //
    printf("--------------------------------------\n"); 
    printf(" sum1(input, MAX_SIZE) \n");                    
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);  

    printf("The sum is: %f\n\n", answer);               
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");                
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);                    
    answer = sum2(input, MAX_SIZE);                     //

    printf("The sum is: %f\n\n", answer);               //
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");            
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);                    
    answer = sum3(MAX_SIZE, input);                     //

    printf("The sum is: %f\n\n", answer);               //
}
float sum1(float list[], int n) 
{
    printf("list\t= %p\n", list);                       //
    printf("&list\t= %p\n\n", &list);                   //
    
    int i;                                              //
    float tempsum = 0;                                  //
    for(i = 0;i < n;i++)                              
    tempsum += list[i];                                 //
    
    return tempsum;                                     //
    }
float sum2(float *list, int n){
    printf("list\t= %p\n", list);                       
    printf("&list\t= %p\n\n", &list);                   
    
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)                                
    tempsum += *(list +i);                              //
    
    return tempsum;                                     //
    }
    /* stack variable reuse test */
float sum3(int n, float *list)                          //
{
    printf("list\t= %p\n", list);                       //
    printf("&list\t= %p\n\n", &list);                   //
    int i;                                              //
    float tempsum = 0;                                  //
    for(i = 0;i < n;i++)        
    tempsum += *(list +i);                              //
    return tempsum;
    }