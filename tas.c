#include <stdio.h>

int main() {
  FILE *file;
  file = fopen("test.txt", "r");

  char text[100];

  while (fgets(text, 100, file)) {
    printf("%s", text);
  }
  printf("%s", file);

  fclose(file);
  return 0;
}
