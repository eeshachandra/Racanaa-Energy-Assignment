#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

void deletenode(struct node* n) 
{
    if (n == NULL) {
        return; // Null node
    }

    if (n->next == NULL) {
        free(n);
        return; // Deleting the last node
    }

    struct node* nextnode = n->next;
    n->data = nextnode->data;
    n->next = nextnode->next;
    free(nextnode);
}