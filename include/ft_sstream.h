#ifndef FT_STRINGSTREAM_H
# define FT_STRINGSTREAM_H

# include "ft_string.h"

typedef struct s_sstream	t_sstream;

struct			s_sstream
{
	t_string	*str;
	t_sstream	*(*clear)(t_sstream*);
	t_sstream	*(*add)(t_sstream*, const char *);
	t_sstream	*(*addn)(t_sstream*, const char *, size_t);
	t_sstream	*(*addc)(t_sstream*, const char);
	t_sstream	*(*adds)(t_sstream*, t_string*);
	t_sstream	*(*addui)(t_sstream*, unsigned int);
	t_sstream	*(*addi)(t_sstream*, int);
	t_sstream	*(*addul)(t_sstream*, unsigned long int);
	t_sstream	*(*addl)(t_sstream*, long int);
};

t_sstream		*ft_sstream_new(void);
t_sstream		*ft_sstream_clear(t_sstream *ss);
t_sstream		*ft_sstream_add(t_sstream *ss, const char *str);
t_sstream		*ft_sstream_addn(t_sstream *ss, const char *str, size_t size);
t_sstream		*ft_sstream_addc(t_sstream *ss, const char c);
t_sstream		*ft_sstream_adds(t_sstream *ss, t_string *str);
t_sstream		*ft_sstream_addui(t_sstream *ss, unsigned int i);
t_sstream		*ft_sstream_addi(t_sstream *ss, int i);
t_sstream		*ft_sstream_addl(t_sstream *ss, long int i);
t_sstream		*ft_sstream_addul(t_sstream *ss, unsigned long int i);
void			ft_sstream_del(t_sstream *ss);

#endif