#include <stdlib.h>
#include <stdio.h>
#include "my_list.h"

int main(){
    my_list *l = NULL;

    l = insert_node(1, l);
    l = insert_node(2, l);
    l = insert_node(3, l);
    l = insert_node(4, l);

    print_list(l);
    delete_list(l);

    return 0;
}
