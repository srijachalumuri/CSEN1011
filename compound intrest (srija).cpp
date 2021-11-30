#include <stdio.h>
int main(){
  int si,ci,p,t,r;
  
  printf("principle = " );
  scanf("%", &p);
  
  printf("Rate of Intrest = ");
  scanf("%d" , &r);
  	
  printf("Time period = ");
  scanf("%d" , &t);
  si=(p*t*r)/100;
  ci=(p*t*(1+r/100),t);
  
  printf("Simple Intrest = %d \n",si );
  printf("compound intrest = %d \n",ci);
  
  return (0);
}
