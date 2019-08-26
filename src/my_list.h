#ifndef MY_LIST
#define MY_LIST

typedef struct node{
    struct node *next;
    int val;
} my_list;

my_list * create_node(int);
my_list * insert_node(int, my_list *);
void print_list(my_list *);
void delete_list(my_list *);

#endif
