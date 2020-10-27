#include <stdio.h>

/*Entre com três valores e exiba uma mensagem dizendo qual dos valores é o maior. Não poderá entrar com valores negativos. E nem valores iguais.*/

int main(void) {

  int v1 = 0;
  int v2 = 0;
  int v3 = 0;
 
  printf("  Entre com o primeiro valor: ");
  scanf("%i", &v1);
  printf("\n  Entre com o segundo valor:  ");
  scanf("%i", &v2);
  printf("\n  Entre com o terceiro valor: ");
  scanf("%i", &v3);

  if (v1 < 0 || v2 < 0 || v3 < 0){
    printf("\n      Valores invalídos");
  }

  else if (v1 == v2 || v1 == v3 || v2 == v3) {
    printf("\n      Valores invalídos");
  }

  else if (v1 > v2 && v1 > v3){
    printf("\n      %i", v1);
  }

  else if (v2 > v1 && v2 > v3){
    printf("\n      %i", v2);
  }

  else if (v3 > v1 && v3 > v2){
    printf("\n      %i", v3);
  }

  return 0;
}