#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  char frase[255];
  int cont = 0, x, y = 0, tam, tamf;
  printf("Digite uma string: ");
  gets(frase);
  tamf = strlen(frase);
  tam = tamf / 2;
  for(x = tamf - 1; x >= tam; x--){
    if(frase[x] == frase[y]){
      cont++;
    }
    y++;
  }
  if(cont == tam + 1){
    printf("É palíndromo");
  }
  else{
    printf("Não é palíndromo");
  }
  getchar();
}