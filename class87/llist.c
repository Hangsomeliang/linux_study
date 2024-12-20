#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "llist.h"

LLIST *llist_create(int size)
{
    LLIST *new;
    new = malloc(sizeof(*new));
    if(new == NULL)
        return NULL;
    new->size = size;
    new->head.data = NULL;
    new->head.prev = &new->head;
    new->head.next = &new->head;
    return new;
}
int llist_insert(LLIST *ptr,const void *data,int mode)
{
    struct llist_node_st *newnode;
    newnode = malloc(sizeof(*newnode));
    if(newnode == NULL)
        return -1;
    newnode->data = malloc(ptr->size);
    if(newnode->data == NULL)
        return -2;
    memcpy(newnode->data,data,ptr->size);
    if(mode == LLIST_FORWARD)
    {
        newnode->prev = &ptr->head;
        newnode->next = ptr->head.next;
    }
    else if(mode == LLIST_BACKWARD)
    {
        newnode->prev = ptr->head.prev;
        newnode->next = &ptr->head;
    }
    else
    {
        return -3;
    }
    newnode->prev->next = newnode;
    newnode->next->prev = newnode;
    return 0;
}

static struct llist_node_st *find_(LLIST *ptr,const void *key,llist_cmp *cmp)
{
    struct llist_node_st *cur;
    for(cur = ptr->head.next;cur!=&ptr->head;cur=cur->next)
    {
        if(cmp(key,cur->data)==0)
            break;
    }
    return cur;
}

void *llist_find(LLIST *ptr,const void *key,llist_cmp *cmp)
{
    return find_(ptr,key,cmp)->data;
}

int llist_delete(LLIST *ptr,const void *key,llist_cmp *cmp)
{
    struct llist_node_st *node;
    node = find_(ptr,key,cmp);
    if(node == &ptr->head)
    {
        return -1;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;
    free(node->data);
    free(node);
    return 0;
}

int llist_fetch(LLIST *ptr,const void *key,llist_cmp*cmp,void *data)
{
    struct llist_node_st *node;
    node = find_(ptr,key,cmp);
    if(node == &ptr->head)
        return -1;
    node->prev->next = node->next;
    node->next->prev = node->prev;
    if(data != NULL)
        memcpy(data,node->data,ptr->size);
    free(node->data);
    free(node);
    return 0;
}

void llist_travel(LLIST *ptr,llist_op *op)
{
    struct llist_node_st *cur;
    for(cur = ptr->head.next;cur!=&ptr->head;cur=cur->next)
    {
        op(cur->data);
    }
}
void llist_destroy(LLIST *ptr)
{
    struct llist_node_st *cur,*next;
    for(cur = ptr->head.next;cur!=&ptr->head;cur=cur->next)
    {
        next = cur->next;
        free(cur->data);
        free(cur);
    }
    free(ptr);
}

