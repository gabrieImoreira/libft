#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_memcmp(const void *str1, const void *str2, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
void    *ft_memset(void *str, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memccpy( void* dest, const void* src, int c, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);
void    ft_bzero(void *str, size_t len);

#endif