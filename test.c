#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(struct Node** root, int item)
{
   struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    struct Node* ptr;
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
void print(struct Node* root)
{
    while (root != NULL) {
        printf("%d->", root->data);
        root = root->next;
    }
}
struct Node *arrayToList(int arr[], int n)
{
    struct Node *root = NULL;
    for (int i = 0; i < n; i++)
        insert(&root, arr[i]);
return root;
}
int main()
{
    int arr[] = { 0, 2, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Node* root = arrayToList(arr, n);
    print(root);
    return 0;
}
