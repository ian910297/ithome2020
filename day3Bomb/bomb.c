#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void phase_1() {
    int x=12;
    if(x==12) {
      system("google-chrome --incognito pornhub.com");
      exit(1);
    } else {
      printf("pass phase_1\n");
    }
}

void phase_2() {
  char text[] = "pornhub";
  char input[100];
  scanf("%s", input);
  if(strcmp(input, text)==0) {// match
    printf("pass phase_2\n");
  } else {
    exit(1);
  }
}

int main() {
    phase_1();
    phase_2();

    return 0;
}
