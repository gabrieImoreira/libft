#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   //test variables 
   char str[50];
   char s = '7';
   int n = 7;

   printf("\nOriginal memset:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   memset(str,s,n);
   puts(str);

   printf("\nCreated memset:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_memset(str, s, n);
   puts(str);
   
   return(0);
}