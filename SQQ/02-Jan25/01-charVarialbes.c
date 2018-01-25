#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
  char ch = 'A';
  printf("The character is %c and the ascii code is: %d\n", ch, ch);
  ch = ch + 1;
  printf("The character is %c and the ascii code is: %d\n", ch, ch);
  ch = ch + 10;
  printf("The character is %c and the ascii code is: %d\n", ch, ch);
  return 0;
}
