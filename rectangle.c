#include<stdio.h>
int main()
{
	int length,breadth,area,perimeter;
	printf("length:");
	scanf("%d",&length);
	
	printf("breadth:");
	scanf("%d",&breadth);

	area=length*breadth;
	printf("the value of area:%d\n",area);
		
	perimeter=2*(length+breadth);
	printf("the value of perimeter:%d",perimeter);
return 0;
}
	
