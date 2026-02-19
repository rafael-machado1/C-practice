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