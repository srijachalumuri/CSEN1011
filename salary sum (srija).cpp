#include<stdio.h>
int main()
{
	int basic,hra,others,ta,pf,it,net;
	printf("enter the basics =\n");
	scanf("%d",&basic);
	printf("enter the transport allowances =\n");
	scanf("%d",&ta);
	printf("enter the hra =\n");
	scanf("%d",&hra);
	printf("enter the others =\n");
	scanf("%d",&others);
	printf("enter the pf =\n");
	scanf("%d",&pf);
	printf("enter the it =\n");
	scanf("%d",&it);
	net=((basic+hra+others+ta)-(pf+it));
	printf("net salary=\n",net);
	return(0);
	
}
