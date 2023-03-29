#include <limits.h> 
#include <stdio.h>
#include "main.h"

/*
*main.h bibliothéque perssonel
*@forma pointeur chaine de caractére
*@len , len2 conteur de caractére
*/

int main(void)
{
  int len = 0, len2 = 0;
  /*len = _printf("Character:[%c]\n", NULL);
  len2 = printf("Character:[%c]\n", NULL);
  printf("len:%d , len2:%d\n", len ,len2);*/
  len = _printf("Let's try to printf a simple sentence.\n");
  len2 = printf("Let's try to printf a simple sentence.\n");
  printf("len:%d , len2:%d\n", len ,len2);
  len = _printf("Character:[%c]\n", 'H');
  len2 = printf("Character:[%c]\n", 'H');
  printf("len:%d , len2:%d\n", len ,len2);
  /*len = _printf("Character:[%t]\n", 'H');
  len2 = printf("Character:[%t]\n", 'H');
  printf("len:%d , len2:%d\n", len ,len2);*/
  len = _printf("String:[%s]\n", "I am a string !");
  len2 = printf("String:[%s]\n", "I am a string !");
  printf("len:%d , len2:%d\n", len ,len2);
  return (0);
}
