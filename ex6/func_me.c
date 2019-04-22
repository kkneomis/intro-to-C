#include <stdio.h>

int mult( int x, int y);

int main(){
  int x;
  int y;

  printf("Please enter two numbers to be multiplied");
  scanf("%d", &x);
  scanf("%d", &y);
  printf("The product of these two numbers is %d\n", mult(x,y));

}

int mult( int x, int y){
  return x*y;
}
