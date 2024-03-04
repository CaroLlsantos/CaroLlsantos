#include <stdio.h>

void dizerBomdia (char nome[20]) {
  printf("Bom dia! %s", nome);
}
void dizerBoatarde (char nome[20]) {
  printf("Boa tarde! %s", nome);
}



int main(void) {

  dizerBomdia("Carol \n");
  dizerBomdia("Henrique \n");
  dizerBomdia("Maria \n");
  dizerBomdia("João \n");
  dizerBoatarde("Carol \n");
  dizerBoatarde("Henrique \n");
  dizerBoatarde("Maria \n");
  return 0;
}