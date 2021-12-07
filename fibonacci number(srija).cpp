#include<stdio.h>
int main() {
	int num, i;
	
	int nl = 0, n2 = 1;
	int nextnum = n1 + n2; 
	
	printf("Enter number in terms: ");
	scanf("%d", &num);
	
	printf("Fibonacci series; %d, %d, ",n1, n2);
	
	for (i=3;i <=num; i++)
	{
		printf("%d, ", nextnum);
		n1=n2;
		n2=nextnum;
		nextnum=n1+n2;
	}
	return 0;
}
