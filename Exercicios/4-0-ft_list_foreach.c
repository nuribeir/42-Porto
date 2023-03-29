/*
Assignment name  : ft_list_foreach
Expected files   : ft_list_foreach.c, ft_list.h
Allowed functions: 
--------------------------------------------------------------------------------

Write a function that takes a list and a function pointer, and applies this
function to each element of the list.

It must be declared as follows:

void    ft_list_foreach(t_list *begin_list, void (*f)(void *));

The function pointed to by f will be used as follows:

(*f)(list_ptr->data);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/

// *** FILE NAME -> 4-0-ft_list.h
#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif

// *** FILE NAME -> 4-0-ft_list_foreach.c

#include "4-0-ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

// *** FILE NAME -> 4-0-ft_list_foreach_MAIN.c

#include <stdio.h>
#include <stdlib.h>
#include "4-0-ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *));

void	print_data(void *data)
{
	printf("%s\n", data);
}

int	main(void)
{
	t_list *test_list = malloc(sizeof(t_list));
	test_list -> data = "what up";
	test_list -> next = malloc(sizeof(t_list));
	test_list -> next -> data = "42";
	test_list -> next -> next = malloc(sizeof(t_list));
	test_list -> next -> next -> data = "peeps?";
	test_list -> next -> next -> next = NULL;

	ft_list_foreach(test_list, print_data);
	return (0);
}