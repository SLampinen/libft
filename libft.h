/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:14:11 by slampine          #+#    #+#             */
/*   Updated: 2022/11/03 11:14:36 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str);
void  ft_bzero(void *str, int len);
void *ft_calloc(unsigned int count, unsigned int size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *str, int c, int n);
int ft_memcmp(const void *str1, const void *str2, unsigned int n);
void *ft_memcpy(void *dest, const void *source, int n);
void *ft_memmove (void *dest, const void *src, int len);
void *ft_memset(void *str, int val, int len);
char *ft_strchr(char *str, int c);
char *strdup(const char *str);
char *ft_strjoin(char const *s1, char const *s2);
unsigned int ft_strlcat(char *dst, const char *src, unsigned int dstsize);
unsigned int ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
int ft_strlen(char *s);
int ft_strncmp(const char *str1, const char *str2, int n);
char *ft_strnstr(const char *haystack, const char *needle, unsigned int len);
char *ft_strrchr(char *str, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start, unsigned int len);
int ft_tolower(int c);
int ft_toupper(int c);