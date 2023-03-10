#include<stdio.h>
int main(){
	int num,temp,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
{
	temp=num%10;
	sum=sum+temp;       
	num=num/10;
}
printf("\n The sum of digits= %d",sum);
return 0;
}
