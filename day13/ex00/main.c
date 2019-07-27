#include "ft_btree.h"
#include "unistd.h"

t_btree     *btree_create_node(void *item);

int     main()
{
    t_btree *node;

    char *x = "ji";
    node = btree_create_node(&x);
    write(1, node->item, 1);
    return (0);
}