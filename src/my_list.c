#include "my_list.h"

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

my_list* create_node(int val){
    my_list *_l;
    _l = malloc(sizeof(my_list));
    assert(_l);

    _l->next = NULL;
    _l->val = val;

    return _l;
}

my_list* insert_node(int val, my_list *l){
   my_list *last = NULL;
   last = l;

   if(last == NULL){
       last = create_node(val);
       return last;
   }

   while(last != NULL){
       last = last->next;
   }

   last->next = create_node(val);

   return l;
}

void print_list(my_list *l){
    printf("[");

    if(l != NULL){
      printf("%d", l->val);
      l = l->next;
    }

    while(l != NULL){
      printf(", %d", l->val);
      l = l->next;
    }
    printf("]\n");

}

void delete_list(my_list *l){
  while(l != NULL){
    my_list *_l;
    _l = l->next;
    free(l);
    l = _l;
  }
}
