#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>


void    *ft_memset(void *str, int c, size_t len);
void    ft_bzero(void *str, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memccpy( void* dest, const void* src, int c, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);

#endif