#include "../include/test.h"

int	main(int argc, char **argv)
{
	char		**tab;
	t_gc		*gc;

	(void)argc;
	gc = ft_gcnew(NULL, NULL);
	tab = ft_dispatchsplit(argv[1], 's', gc);
	puts("lol");
	printf("%s\n", tab[0]);
	ft_malloc("str", 3, "ERROR : split's Malloc failed", gc);
	ft_free(gc);
}