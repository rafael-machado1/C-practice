/*
Og é um homem das cavernas com vários filhos e filhas, e ele quer contar todos eles. 
Og conta seus filhos com sua mão esquerda e suas filhas com sua mão direita.
Entretanto, Og não é inteligente, e não sabe somar os dois números. Assim, ele pediu para você escrever um programa que realize a soma.
*/

/*
Entrada
A entrada contém vários casos de teste. Cada caso de teste consiste em uma linha contendo dois inteiros L e R, 
separados por um espaço, indicando o número de filhos e de filhas, respectivamente (1 ≤ L, R ≤ 5).

O fim do arquivo de entrada é indicado por L = R = 0.
*/

#include <stdio.h>

int main(){

  int R,L;

  // Múltiplos casos de teste
  while(1){
    scanf("%d%d",&R,&L);

    // Quebra o loop
    if (R == 0 && L == 0) {
      break;

      // Continua o loop 
    } else {
      printf("%d\n",R+L);
    }
  }

  return 0;

}