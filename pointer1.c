#include <stdio.h>
#include <stdlib.h>

// Trocar o valor de duas variáveis utilizando ponteiros

int main() {

    int a = 1;
    int b = 2;
    printf("a: %d e b:%d\n",a,b);

    int *p1;
    int *p2;
    int aux;
   
   p1 = &a;
   p2 = &b;
   printf("p1:%p e p2:%p\n", p1,p2);
  
  aux = *p1;
  *p1 = *p2;
  *p2 = aux;

  printf("ponteiro p1 recebe:%d e ponteiro p2 recebe:%d\n",*p1,*p2);

  a = *p1;
  b = *p2;
  printf("a:%d e b:%d\n",a,b);
  
    
    return 0;
}