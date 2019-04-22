#include <stdio.h>

int main(){
  
  int i = 0;
  char *str = "Hello World\n";
 
  while (str[i] != '\0'){
    printf("%c", str[i++]);
  }

  return 0;

}
