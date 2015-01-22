#ifndef FT_STRING_H
# define FT_STRING_H

# include <unistd.h>

typedef struct s_string	t_string;

struct		s_string
{
	char	*str;
	size_t	size;
	size_t	reserve;
};

t_string	*ft_string_new(void);
t_string	*ft_string_news(const char *str);
t_string	*ft_string_newr(size_t reserve);
t_string	*ft_string_app(t_string *s, const char *str);
t_string	*ft_string_appn(t_string *s, const char *str, size_t size);
t_string	*ft_string_reserve(t_string *s, size_t size);
t_string	*ft_string_insert(t_string *s, const char *str, size_t index);
t_string	*ft_string_insertn(t_string *s, const char *str, size_t size,\
			size_t index);
t_string	*ft_string_replacen(t_string *s, size_t index, size_t size,\
								const char *str, size_t size_str);
t_string	*ft_string_replace(t_string *s, size_t index, size_t size,\
								const char *str);
t_string	*ft_string_replaces(t_string *s, size_t index, size_t size,\
								t_string *str);
t_string	*ft_string_substr(const t_string *s, size_t index, size_t size);
t_string	*ft_string_clear(t_string *s);
t_string	*ft_string_cpy(const t_string *s);
ssize_t		ft_string_search(t_string *s, const char *str);
ssize_t		ft_string_searchc(t_string *s, const char c);
ssize_t		ft_string_searchs(t_string *s, t_string *search);
void		ft_string_del(t_string *s);
void		ft_string_delptr(t_string **s);

#endif