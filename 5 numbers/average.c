#include<stdio.h>
int main()
{
	float num_1,num_2,num_3,num_4,num_5,average;
	printf("enter the value of num_1:");
	scanf("%f",&num_1);
	
	printf("enter the value of num_2:");
	scanf("%f",&num_2);

	printf("enter the value of num_3:");
	scanf("%f",&num_3);

	printf("enter the value of num_4:");
	scanf("%f",&num_4);

	printf("enter the value of num_5:");
	scanf("%f",&num_5);

	average=(num_1+num_2+num_3+num_4+num_5)/5;
	printf("the value of average:%f",average);
return 0;
}