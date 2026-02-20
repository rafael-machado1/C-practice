/*Cansada de lavar suas roupas sujas, sua mãe decidiu que a partir de agora quem lava suas roupas é você.

Na lavanderia da sua casa existe uma lavadora e uma secadora de roupas, 
cada uma com um limite mínimo e máximo de peças a serem lavadas e secadas por vez. 
Assim sendo, a lavadora só deve ser usada se forem colocadas no mínimo LA e no máximo LB peças dentro dela, 
e semelhantemente a secadora só deve ser usada se forem colocadas no mínimo SA e no máximo SB peças dentro dela.

Você tem atualmente N peças de roupa a serem lavadas e secadas, e quer descobrir se é possível usar a 
lavadora e secadora para lavar e secar todas as suas peças, seguindo as regras acima.

Entrada
Na primeira linha da entrada haverá um inteiro N (1 ≤ N ≤ 100).

Na segunda linha da entrada haverá dois inteiros LA e LB (1 ≤ LA < LB ≤ 100).

Na terceira linha da entrada haverá dois inteiros SA e SB (1 ≤ SA < SB ≤ 100).*/

#include <stdio.h>

int main() {
  int N,LA,LB,SA,SB;

  // Quantidade de roupas a serem lavadas N
  scanf("%d",&N);

  // Quantidade mínima e máxima de roupas na lavadora LA / LB
  scanf("%d%d",&LA,&LB);

  // Quantidade mínima e máxima de roupas na lavadora SA / SB
  scanf("%d%d",&SA,&SB);

  if((N >= SA) && (N >= LA) && (N <= LB) && (N <= SB)){
    printf("possivel\n");
  } else {
    printf("impossivel\n");
  }

  return 0;

}