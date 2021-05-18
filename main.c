#include <stdio.h>
#include <string.h>
#include "libft.h"

int main () {
   //test variables 
   
   char str[50];
   char s = '7';
   int n = 7;

   printf("************************************\n");
   printf("\nmemset:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   memset(str,s,n);
   puts(str);

   printf("\nft_memset:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_memset(str, s, n);
   puts(str);
   printf("\n************************************\n");

   // =========================function 2===================

   //test variables 
   n = 0;

   printf("\nbzero:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   bzero(str, n);
   printf("%s\n\n", str);

   printf("ft_bzero:\n");
   strcpy(str,"This is string.h library function");
   puts(str);
   ft_bzero(str, n);
   puts(str);
   
   printf("\n************************************\n");

   // =========================function 3===================

   struct {
      char name[40];
      int age;
   } person, person_copy;

   char myname[] = "Pierre de Fermat";
   n = 33;

   printf("\nmemcpy:\n");
   /* using memcpy to copy string: */
   memcpy (person.name, myname, n);
   //ft_memcpy(person.name, myname, 100);
   person.age = 46;
   /* using memcpy to copy structure: */
   memcpy (&person_copy, &person, sizeof(person));
   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age);

   printf("\nft_memcpy:\n");
   /* using memcpy to copy string: */
   ft_memcpy(person.name, myname, n);
   person.age = 46;
   /* using memcpy to copy structure: */
   ft_memcpy (&person_copy, &person, sizeof(person));
   printf ("person_copy: %s, %d \n", person_copy.name, person_copy.age);
   printf("\n************************************\n");

   // =========================function 4 ===================

   n = 16;
   s = 'F';
   printf("\nmemccpy:\n");
   char src[] = "Pierre de Fermat";
   char dst[] = "Linux Mint V03";
   memccpy(&dst, &src, s, n);
   printf("dest: %s\n", dst);
   memccpy(&dst, &src, 'U', 30);
   printf("dest: %s\n", dst);

   printf("\nft_memccpy:\n");
   char src1[] = "Pierre de Fermat";
   char dst1[] = "Linux Mint V03";
   ft_memccpy(&dst1, &src1, s, n);
   printf("dest: %s\n", dst1);
   ft_memccpy(&dst1, &src1, 'U', 30);
   printf("dest: %s\n", dst1);
   printf("\n************************************\n");

   // =========================function 4 ===================
   
   printf("\nmemmove:\n");
   char strt[] = "memmove can be very useful......";
   memmove(strt+20,strt+15,11);
   printf("output: %s\n",strt);
   char	dest3[] = "lorem ipsum dolor sit amet";
	char	src3[] = "memmove can";
   ft_memmove(dest3, src3, 10);
   printf("output SF: %s\n",dest3);

   printf("\nft_memmove:\n");
   char ft_strt[] = "memmove can be very useful......";
   memmove(ft_strt+20,ft_strt+15,11);
   printf("output: %s\n",ft_strt);
   char	ft_dest3[] = "lorem ipsum dolor sit amet";
	char	ft_src3[] = "memmove can";
   ft_memmove(ft_dest3, ft_src3, 10);
   printf("output SF: %s\n",ft_dest3);
   printf("\n************************************\n");

   // =========================function===================
   printf("\nmemchr:\n");
   const char str4[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   ret = memchr(str4, ch, strlen(str4));
   printf("String after |%c| is - |%s|\n", ch, ret);
   ret = memchr(str4, 'G', strlen(str4));
   printf("String after |G| is - |%s|\n", ret);

   printf("\nft_memchr:\n");
   const char ft_str4[] = "http://www.tutorialspoint.com";
   const char ft_ch = '.';
   char *ft_ret;
   ft_ret = ft_memchr(ft_str4, ft_ch, strlen(ft_str4));
   printf("String after |%c| is - |%s|\n", ft_ch, ft_ret);
   ft_ret = ft_memchr(ft_str4, 'G', strlen(ft_str4));
   printf("String after |G| is - |%s|\n", ft_ret);
   printf("\n************************************\n");

   // =========================function===================

   printf("\nmemcmp:\n");
   char str1[15];
   char str2[15];
   int output;
   memcpy(str1, "AB/0ZXZ", 7);
   memcpy(str2, "AB/0/t/t/t/t/zXZ", 7);
   output = memcmp(str1, str2, 6);
   printf("output: %i\n", output);
   output = memcmp(str1, str2, 2);
   printf("output: %i\n", output);

   printf("\nft_memcmp:\n");
   char ft_str1[15];
   char ft_str2[15];
   int ft_output;
   ft_memcpy(ft_str1, "AB/0ZXZ", 7);
   ft_memcpy(ft_str2, "AB/0/t/t/t/t/zXZ", 7);
   ft_output = ft_memcmp(ft_str1, ft_str2, 6);
   printf("output: %i\n", ft_output);
   ft_output = ft_memcmp(ft_str1, ft_str2, 2);
   printf("output: %i\n", ft_output);
   printf("\n************************************\n");

   // =========================function===================

   size_t len;
	char *t = "papibaquígrafo\t\tis a brazi\0lian word";

   printf("\nstrlen:\n");
	len = strlen(t);
	printf("output: |%s| has |%zu| characters\n", t, len);

   printf("\nft_strlen:\n");
	len = strlen(t);
	printf("output: |%s| has |%zu| characters\n", t, len);
   printf("\n************************************\n");

   // =========================function===================

   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   // =========================function===================
   return(0);
}