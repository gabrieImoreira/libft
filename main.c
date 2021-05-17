#include <stdio.h>
#include <string.h>
#include <string.h>
#include "libft.h"

int main () {
   //test variables 
   
   char str[50];
   char s = '7';
   int n = 7;

   printf("************************************\n");
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
   
   printf("\n************************************\n");
   // =========================function 2===================
   struct {
      char name[40];
      int age;
   } person, person_copy;

   char myname[] = "Pierre de Fermat";
   char dest[] = "University";
   n = 33;

   printf("\nOriginal memcpy:\n");
   /* using memcpy to copy string: */
   memcpy (person.name, myname, n);
   //ft_memcpy(person.name, myname, 100);
   person.age = 46;
   /* using memcpy to copy structure: */
   memcpy (&person_copy, &person, sizeof(person));
   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age);

   printf("\nCreated memcpy:\n");
   /* using memcpy to copy string: */
   ft_memcpy(person.name, myname, n);
   person.age = 46;
   /* using memcpy to copy structure: */
   ft_memcpy (&person_copy, &person, sizeof(person));
   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age);

   printf("\n************************************\n");

   return(0);
}