/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badal-la <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:22:07 by badal-la          #+#    #+#             */
/*   Updated: 2024/11/14 15:20:56 by badal-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);

void	*ft_bzero(void *s, size_t n);
/* Assigne a une chaine de caractere s n fois le caractere 0 
	(pas '0') et retourne s.
		/!\ caster en (unsigned char) s */

void	*ft_calloc(size_t nmemb, size_t size);
/* malloc un tableau de nmemb de taille size et assigne 0
	(pas 0) a chaque octet cree. utilise bzero apres 
	avoir malloc */

int		ft_isalnum(int c);
/* retourne 1 si le caractere c cherche est soit un chiffre 
	ou un caractere alphabetique de la table ascii ou 0 
	s'il ne l'est pas */

int		ft_isalpha(int c);
/* retourne 1 si le caractere c cherche est un caractere 
	alphabetique de la table ascii ou 0 s'il ne l'est pas */

int		ft_isascii(int c);
/* retourne 1 si le caractere c cherche est un ascii ou 0 
	s'il ne l'est pas */

int		ft_isdigit(int c);
/* retourne 1 si le caractere c cherche est un chiffre de 
	la table ascii ou 0 s'il ne l'est pas */

int		ft_isprint(int c);
/* retourne 1 si le caractere c cherche est entre ' ' et 
	l'avant dernier caratere de l table ascii ou 0 s'il
	ne l'est pas */

char	*ft_itoa(int n);
/* Convertit un entier `n` en une chaîne de caractères 
	ASCII terminée par un caractère nul et retourne cette chaîne.
	Gère les nombres positifs et négatifs. */

void	*ft_memchr(const void *s, int c, size_t n);
/* Cherche le caractere c dans  les n premiers octets de
	s et renvoie un pointeur vers l'adresse de ce caractere.
	Elle ne s'arrete pas a un '\0' et return NULL si le 
	caractère n'est pas trouvé.
		/!\ caster :	(unsigned char)c
						((unsigned char *)s)[i]
		/!\ return (NULL) a la fin */

int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* Comparer les blocs de mémoire s1 et s2, octet par octet, 
	jusqu'à n octets. strncmp compare lui 2 cdc. */

void	*ft_memcpy(void *dest, const void *src, size_t n);
/*  copie les n premiers octets de src vers dest. Elle
	ne gère pas les chevauchements de mémoire (pour cela,
	memmove est utilisée).
		/!\ seulement while (i < n) ... i++
		/!\ ((unsigned char *)s)[i] */

void	*ft_memmove(void *dest, const void *src, size_t n);
/*  copie les n premiers octets de src vers dest. Elle
	gère les chevauchements de mémoire.
		/!\ while (i < n) ... i++
		/!\ while (n != 0) ... n--
		/!\ ((unsigned char *)s)[i] */

void	*ft_memset(void *s, int c, size_t n);
/* Assigne a une chaine de caractere n fois le caractere c
	et retourne s.
		/!\ caster en (unsigned char) *s et c
		/!\ ((unsigned char *)s)[i]  */

char	**ft_split(char const *s, char c);
/* découpe la chaîne s en sous-chaînes en utilisant c comme
	délimiteur, puis renvoie un tableau de pointeurs vers
	ces sous-chaînes, avec un pointeur nul (NULL) pour
	indiquer la fin du tableau. */

char	*ft_strchr(const char *s, int c);
/*  recherche le caractè
int		ft_isprint(int c);n ((char *)&s[i]);
			return (NULL) */

char	*ft_strdup(const char *s);
/* alloue suffisamment de mémoire pour copier la chaîne
	source s, y compris le caractère nul de fin (\0). 
	Elle copie ensuite chaque caractère de s dans le nouvel
	espace mémoire. La fonction retourne un pointeur vers
	cette nouvelle chaîne dupliquée. En cas d'échec de
	l'allocation mémoire, elle retourne NULL
		/!\ +1 a strlen pour malloc afin d'integrer '\0' */

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/* Applique la fonction donnée à chaque caractère de 
	la chaîne s, en modifiant directement chaque caractère 
	dans la chaîne d’origine. */

char	*ft_strjoin(char const *s1, char const *s2);
/* concatène deux chaînes de caractères s1 et s2 en allouant 
	suffisamment de mémoire pour contenir les deux chaînes, 
	y compris le caractère nul de fin (\0). 
	Elle retourne une nouvelle chaîne contenant le contenu 
	de s1 suivi de s2. En cas d’échec de l’allocation de mémoire, 
	elle retourne NULL.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size);
/* ft_strlcat concatène la chaîne src à la fin de dst, 
	en s’assurant que la longueur totale ne dépasse pas size, 
	y compris le caractère nul de fin (\0). La fonction renvoie 
	la longueur totale que la chaîne aurait eue si size avait 
	été suffisamment grand (la longueur initiale de dst plus 
	la longueur de src). Si size est inférieur ou égal à la 
	longueur initiale de dst, la fonction retourne size + la longueur de src. 
	Elle s’assure que dst est toujours terminé par un caractère nul.
		/!\ debut de fonction :
			if (size == 0 || size <= i)
				return (ft_strlen(src) + size); */

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
/* copie jusqu’à size - 1 caractères de src vers dest pour
	s’assurer que dest est toujours terminé par un caractère
	nul (\0), tant que size est supérieur à 0. La fonction
	retourne la longueur de la chaîne source src, permettant
	ainsi de savoir si la copie a été tronquée (si src est
	plus long que size). 
		/!\ debut de fonction :
			if (size == 0)
				return (ft_strlen(src));
		/!\ fin de fonction :
			return (ft_strlen(src));*/

size_t	ft_strlen(const char *s);
/* parcourt et compte chaque caractère de la chaîne s jusqu'à
rencontrer le caractère nul (\0) */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strtrim(char const *s1, char const *set);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
/* compare n caractères de s1 et s2 ou s’arrête plus tôt si
	elle rencontre un caractère nul (\0) dans l'une des chaînes 
	/!\ debut de fonction :
			if (n == 0)
				return (0);
	/!\ ((unsigned char *)s1)[i]  
	/!\ ((unsigned char *)s2)[i]*/

char	*ft_strnstr(const char *big, const char *little, size_t len);
/* recherche la première occurrence de little dans les len premiers
	caractères de big. La recherche s’arrête si la sous-chaîne est
	trouvée ou si elle dépasse len caractères. Si little est une
	chaîne vide, strnstr retourne big. Si little n'est pas trouvé,
	elle retourne NULL. Si little est trouve retourne les caracteres
	de big a partir u debut de little
		/!\ debut de fonction :
			if (little[0] == '\0')
				return ((char *)big);*/

char	*ft_strrchr(const char *s, int c);
/*  recherche le caractère c dans une cdc s terminée par un caractère
	nul '\0'. Elle fait la recherche du caractere a partir de la fin 
	de la cdc.
		/!\ caster :	(char)c
						(char *)&s[i]
		/!\ fin de fonction :
			if ((char)c == '\0')
				return ((char *)&s[i]);
			return (NULL) */

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_tolower(int c);
/* Passe le caractere c de majuscule a minuscule*/

int		ft_toupper(int c);
/* Passe le caractere c de minuscule a majuscule*/

void	ft_putchar_fd(char c, int fd);
/* Permet d'écrire le caractère c dans le fichier fd.
 Il s'agit de la meme  fonction que ft_putchar sauf 
 qu'on remplace dans write le descripteur de sortie
  standard 1 par fd. 
 */

void	ft_putendl_fd(char *s, int fd);
/* Écrit la phrase s dans le fichier fd. Suivi d'un
	retour à la ligne
   Il s'agit de la même fonction que ft_putstr + \n 
   à la fin */

void	ft_putnbr_fd(int n, int fd);
/* Écrit le nombre n dans le fichier fd.
   Il s'agit de la même fonction que ft_putnbr */

void	ft_putstr_fd(char *s, int fd);
/* Écrit la phrase s dans le fichier fd. 
   Il s'agit de la même fonction que ft_putstr */

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);

#endif