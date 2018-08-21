#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>=b)? a:b
int absoluto(int x){
	return (x>0)? x:-x;   //Pregunta si x es mayor que 0, si se cumple, devuelve un resultado (x), si no, devuelve otro(-x).
	}
int main(int argc, char *argv[])
{
int a, b, r;
a=-10;
b=725; 
a=absoluto(a);
b=absoluto(b);
printf("%d\t%d\n",a,b);
r=a;
a=max(a,b);
b=(a-r!=0)? r:b; //Pregunta si (a-r) es diferente a 0. Si se cumple la condicion, se guarda el valor en r; si no, en b.
printf("%d\t%d\n",a,b);
Inicio:
  system("PAUSE");
  r=a%b; //Operador modulo. Devuelve el residuo.
  a=b;
  printf("r=%d\tb=%d\n",r,b);
  b=(r==0)? b:-1; //Si r es igual a 0, b guarda a b; si no, guarda -1.
  asm("mov $0x0,%eax");
  goto Inicio;
Salida:
system("PAUSE");	
return 0;
}