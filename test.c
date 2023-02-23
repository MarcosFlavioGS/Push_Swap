#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node* next;
}   t_node;
void insert(t_node** root, int item)
{
    t_node* temp = (t_node*) malloc(sizeof(t_node));
    t_node* ptr;
    temp->data = item;
    temp->next = NULL;
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
}
void print(t_node* root)
{
    while (root != NULL) {
        printf("%d->", root->data);
        root = root->next;
    }
}
t_node *arrayToList(char **argv)
{
    t_node *root = NULL;
    for (int i = 1; argv[i]; i++)
        insert(&root, atoi(argv[i]));
return root;
}
int main(int argc, char **argv)
{
    t_node* root = arrayToList(argv);
    print(root);
    return 0;
}
