#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100];
  int i, j;

  printf("Digite uma Palavra: ");
  fgets(palavra, sizeof(palavra), stdin);
  palavra[strcspn(palavra, "\n")] = '\0';

  for (i = 0, j = strlen(palavra) - 1; i < j; i++, j--) {
    if (palavra[i] != palavra[j]) {
      printf("Nao e Palindroma.\n");
      return 0;
    }
  }

  printf("Palavra palindroma.\n");
  return 0;
}
