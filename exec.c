//Jennifer Yu and Sam Xu
//11-18-16

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main() {

  printf("What would you like to do? ");
  char input[60];
  fgets(input, sizeof(input), stdin);

  char *temp = input;
  temp = strsep(&temp,"\n");

  int i = 0;
  char *arr[10];

  while (temp) {
    arr[i] = strsep(&temp, " ");
    i++;
  }

  arr[i] = NULL;

  execvp(arr[0], arr);
  if (errno) {
    printf("Error %d: %s\n", errno, strerror(errno));
  }

  return 0;

}
