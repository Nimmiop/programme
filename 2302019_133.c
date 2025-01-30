#include<stdio.h>
int main(){
    int num1,num2,sum,j;
    printf("Input two integer values:\n");
    scanf("%d %d",&num1,&num2);
    j=0;
    sum=num1+num2;
    while(sum!=0){
        if(sum>0){
            sum=sum/10;
            j++;
        }
    }
    printf("Number of digits of the sum value of the said numbers:\n");
    printf("%d\n",j);
    return 0;
}