#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data){
    if(!data) return;
    t_list *front = mx_create_node(data);
    front->next = *list;
    *list = front;
}
