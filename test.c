#include <stdio.h>
#include <string.h>
#include <string.h>
#include "libft.h"

int main () {
   //test variables 
   
   char str[50];
   char s = '7';
   int n = 7;

   ///*
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
   printf("\n************************************\n");
   //*/
   // =========================function 2===================
   //test variables 
   n = 0;

   printf("\nOriginal bzero:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   bzero(str, n);
   printf("%s\n\n", str);

   printf("Created bzero:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_bzero(str, n);
   puts(str);


   return(0);
}