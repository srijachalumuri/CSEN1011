   #include<stdio.h>
   int main()
   {
   	float p,t,r,si,ci;
   	scanf("%f", &p);
   	scanf("%f", &t);
	scanf("%f", &r);
	si=(p*t*r)/100;
	ci=p*(((1+r)/100)*t);
	printf("simple intrest %0.1f", si);
	printf("compound intrest %0.1f", ci);
   }































