#include <stdio.h>
int main(void)
{
	
int a;
int b = 4;
int *c;
c = &b;
int *q;
q = c;



printf("valor de a: %d \n", a);
printf("valor de b: %d \n", b);
printf("endereço de b: %p \n", &b);
printf("valor de c: %p \n", c);
printf("valor de q:%p\n",q);
}
