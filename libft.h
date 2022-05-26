/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdominic <gdominic@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:52:54 by gdominic          #+#    #+#             */
/*   Updated: 2022/05/26 16:05:32 by gdominic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c); // test true (0101 && 0170)alfabeto
int		ft_isdigit(int c); // test true if c is a digit
int		ft_isalnum(int c); // test true if c is a digit opr alphabet
int		ft_isascii(int c); // test true if c is any printable character
int		ft_isprint(int c); // test true if there is any character printabl;e
size_t	ft_strlen(const char *s);/*
			test detetrmine the lenght of the string.
			return the number of the caracters before NULL*/
void	*ft_memset(void *b, int c, size_t len);/*
			write len bytes of value c
			to the string b casted to unsigned char*/
void	ft_bzero(void *s, size_t n); /*
			write n zero bytes to the string s
			if n is zero, bzero() does nothing*/
void	*ft_memcpy(void *dst, const void *src, size_t n);/*
			copies n bytes from memory area src to area dst. not consider 
			overlap*/
void	*ft_memmove(void *dst, const void *src, size_t len);/*same that
			memcpy but consider the overlapping.*/

/*************************STRLCPY AND STRLCAT********************/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);/*
			Copies up to dstsize - 1 characters from the string src to dst,
		   	NUL-terminating the result if dstsize is not 0.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);/*
			appends string src to the end of dst.  It will append
			at most dstsize - strlen(dst) - 1 characters.
		   	It will then NUL-terminate, unless dstsize is 0 or the original
			dst string was longer than dstsize (in practice this should not
			happen as it means that either dstsize is incorrect or that dst
		   	is not a proper string).*/
/************************TOUPPER AND TOLOWER*************************/
int		ft_toupper(int c);/*
			The toupper() function converts a lower-case letter to the
			corresponding upper-case letter.The argument must be representable
			as an unsigned char or the value of EOF.*/
int		ft_tolower(int c);/*
			The tolower() function converts an upper-case letter to the
		   	corresponding lower-case letter.The argument must be representable
		   	as an unsigned char or the value of EOF.*/
/*********************STRCHR, STRRCHR AND STRNCMP**********************/
char	*ft_strchr(const char *s, int c);/*
			The strchr() function locates the first occurrence of c
			(converted to a char) in the string pointed to by s.The terminating
			null character is considered to be part of the string; therefore if c 
			is `\0', the functions locate the terminating `\0'.*/
char	*ft_strrchr(const char *s, int c);/*
			The strrchr() function is identical to strchr(), except it locates
			the last occurrence of c.*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);/*
			The strncmp() function compares not more than n characters.
			This function return values that are as follows −
			if Return value < 0 then it indicates str1 is less than str2.
			if Return value > 0 then it indicates str2 is less than str1.
			if Return value = 0 then it indicates str1 is equal to str2.*/
/********************MEMCHR and MEMCMP***********************************/
void	*ft_memchr(const void *s, int c, size_t n);/*
			The memchr locates the first occurence of c (converted to an
			unsigned char) in string s. RETURN: pointer to the byte located
			or NULL if such byte does not exist*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);/*
			The memcmp compare string s1 and string s2. Both string are 
			assumed to be n bytes long. RETURN zero if the two strings
			are identical, otherwise returns the difference between the 
			first two differing bytes (the two strings casted as "unsigned
			char")*/
/****************************STRNSTR***********************************/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);/*
			the strmstr locates the first occurence of the null--terminated 
			string needle in the string haystack, where not more than len 
			characters are searched. RETURN: if needle is a empty string
			haystack is returned; if needle occurs nowhere in haystack, 
			NULL is returned; otherwise a pointer to the first character
			of the first occurence of needle is returned.*/
/*************************ATOI***************************************/
int		ft_atoi(const char *str);/*
			Converts the initial portion of the string pointed to by str to 
			int representation. The function return '0' if not found any
			char*/
/**************************CALLOC*************************************/
void	*ft_calloc(size_t count, size_t size);/*
			The calloc function contiguously allocates enough space for count
			objects that are size bytes of memory each and returns a poointer
			to the allocated memory. The allocated memory is filleed with
			bytes of value zero.*/
/*************************STRDUP*************************************/
char	*ft_strdup(const char *s1);/*
			allocates sufficient memory for a copy of the string s1, does the
			copy and return a pointer to it.*/
/*************************SUBSTR**************************************/
char	*ft_substr(char const *s, unsigned int start, size_t len);/*
			cut a string from the point "start" and for n. bytes as define
			by "len", put a NULL to the last position of str and return
			a pointer.*/
/***********************STRJOIN***************************************/
char	*ft_strjoin(char const *s1, char const *s2);/*
			allocate enough memory to join s2 to s1 and return the full string
			with the '\0' at the end of the string*/
/**************************STRTRIM***********************************/
char	*ft_strtrim(char const *s1, char const *set);/*
			found the string of char locates in set inside s1 and trim it from
			the beginning and the end of the string.*/
/***************************SPLIT***********************************/
char	**ft_split(char const *s, char c);/*
			evaluate a string, count words depends on the delimitate word located in c
			and creat a bidimensional matrix with the respective memory. Free all
			the memory if any malloc is NULL or if he cannot find 
			the word on c*/
/***************************ITOA*********************************/
char	*ft_itoa(int n);/*
			return a string with char converted from an int*/
/*************************STRMAPI*********************************/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/*************************BONUS***********************************/
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
