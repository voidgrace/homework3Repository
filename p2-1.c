#include <stdio.h>
#define MAX_SIZE 100 //�ִ밪 == 100
float sum1(float list[], int);     //�迭 ����
float sum2(float *list, int);       //�����ͷ� �迭����
float sum3(int n, float *list);      //����ȣ�� ������ ���� �ּ� �Ҵ�
float input[MAX_SIZE], answer;      
int i;                              
void main(void)
{
    for(i=0; i < MAX_SIZE; i++)
        input[i] = i;               //�迭 input �ʱ�ȭ

    /* for checking call by reference */
    printf("[-----[������][2022041047]-----]\n");
    
    //����� �迭 ���� ����
    printf("--------------------------------------\n"); 
    printf(" sum1(input, MAX_SIZE) \n");                    
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);
    answer = sum1(input, MAX_SIZE);                     
    printf("The sum is: %f\n\n", answer);              

    //�迭, ���� ������ ���� ����
    printf("The sum is: %f\n\n", answer);               
    printf("--------------------------------------\n");
    printf(" sum2(input, MAX_SIZE) \n");                
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);                    
    answer = sum2(input, MAX_SIZE);                     
    printf("The sum is: %f\n\n", answer);              

    // ����, �迭 ������ ���� ����
    printf("The sum is: %f\n\n", answer);               
    printf("--------------------------------------\n");
    printf(" sum3(MAX_SIZE, input) \n");            
    printf("--------------------------------------\n");
    printf("input \t= %p\n", input);                    

    answer = sum3(MAX_SIZE, input);                     
    printf("The sum is: %f\n\n", answer);              
}

float sum1(float list[], int n) //list�� ���� ��ȯ�ϴ� �Լ�
{
    printf("list\t= %p\n", list); //list�� ���� �迭 input�� �ּ�                    
    printf("&list\t= %p\n\n", &list);//sum1�Լ��� �������� list�� �ּ� 
    
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)                              
    tempsum += list[i];                                 
    
    return tempsum;  //�迭�� �� ��ȯ
    }
float sum2(float *list, int n)//�迭�� ���� ������ ���� ����
{
    printf("list\t= %p\n", list); //list�� ���� �迭 input�� �ּ�                      
    printf("&list\t= %p\n\n", &list);//sum2�Լ��� �������� list�� �ּ�                    
    
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)                                
    tempsum += *(list +i);                              
    
    return tempsum;  //�迭�� �� ��ȯ                                   
    }
    /* stack variable reuse test */
float sum3(int n, float *list)//     
{
    printf("list\t= %p\n", list);  //list�� ���� �迭 input�� �ּ�                      
    printf("&list\t= %p\n\n", &list);//sum3�Լ��� �������� list�� �ּ�  //n�� �� ���� ����Ǿ�, sum2�� �ٸ�
    int i;                                              
    float tempsum = 0;                                  
    for(i = 0;i < n;i++)        
    tempsum += *(list +i);                              
    return tempsum;//�迭�� �� ��ȯ
    }