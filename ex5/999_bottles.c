#include <stdio.h>
#include <unistd.h>

int main(){
  
  int time_to_sleep = 1;
  int x;
  x = 99;

  do {
    printf("%d bottles of beer on the wall\n", x);
    printf("%d bottles of beer...\n", x);
    printf("You take one down, you pass it around\n");
    printf("%d bottles of beer on the wall!!!!\n\n", x);
    sleep(time_to_sleep);
    x--;
  } while (x > 0);

}
