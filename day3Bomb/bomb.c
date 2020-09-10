#include <stdio.h>
#include <stdlib.h>

void phase_1() {
    int x=12;
    if(x==12) {
      system("google-chrome --incognito pornhub.com");
      exit(1);
    } else {
      system("google-chrome --incognito google.com");
    }
}

int main() {
    phase_1();

    return 0;
}
