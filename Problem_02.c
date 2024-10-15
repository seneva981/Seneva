// Linked list by code with harry


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next_link;
};

void linked_list_traversal(struct node *head);
struct node *insert_at_beginning(struct node *head, int data);
struct node *insert_in_between(struct node *head, int data, int index);
struct node *insert_at_end(struct node *head, int data);
struct node *insert_after_node(struct node *head, struct node *before_node, int data);

int main()
{
    // Allocating memory for nodes in the nexted list in Heap
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));


    // Linking first and second node
    head->data = 1;
    head->next_link = second;

    // Linking second and third node
    second->data = 2;
    second->next_link = third;

    // Linking third and fourth node
    third->data = 3;
    third->next_link = fourth;

    // Terminating fourth node
    fourth->data = 4;
    fourth->next_link = NULL;

    printf("Elements before inserting at the beginning are:\n");
    linked_list_traversal(head);

    printf("Elements after inserting at the beginning are:\n");
    head = insert_at_beginning(head, 5);
    linked_list_traversal(head);

    printf("Elements after inserting in between the list are:\n");
    insert_in_between(head, 6, 3);
    linked_list_traversal(head);

    printf("Elements after inserting at the end of the list are:\n");
    head = insert_at_end(head, 7);
    linked_list_traversal(head);

    printf("Elements after again inserting at the end of the list are:\n");
    head = insert_at_end(head, 8);
    linked_list_traversal(head);

    printf("Elements after again inserting at the end of the list are:\n");
    head = insert_at_end(head, 9);
    linked_list_traversal(head);

    printf("Elements after inserting node after a node in the list are:\n");
    head = insert_after_node(head, third, 10);
    linked_list_traversal(head);

    return 0;
}

// Function for traversing the linked list and printing its data
void linked_list_traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("Element: %d\n", head->data);
        head = head->next_link;
    }
}

// Function for inserting a node at the beginning of the linked list
struct node *insert_at_beginning(struct node *head, int data)
{
    struct node *node_before_head = (struct node *)malloc(sizeof(struct node));
    node_before_head->data = data;
    node_before_head->next_link = head;
    return node_before_head;
}

// Function for inserting a node in between of the linked list
struct node *insert_in_between(struct node *head, int data, int index)
{
    struct node *node_in_between = (struct node *)malloc(sizeof(struct node));
    node_in_between->data = data;
    struct node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next_link;
        i++;
    }

    node_in_between->next_link = p->next_link;
    p->next_link = node_in_between;

    return head;
}

// Function for appending a node at end of the linked list
struct node *insert_at_end(struct node *head, int data)
{
    struct node *node_at_end = (struct node *)malloc(sizeof(struct node));
    node_at_end->data = data;
    node_at_end->next_link = NULL;

    struct node *p = head;

    while (p->next_link != NULL)
    {
        p = p->next_link;
    }

    p->next_link = node_at_end;

    return head;
}

// Function for inserting a node after a node in the linked list
struct node *insert_after_node(struct node *head, struct node *before_node, int data){
    struct node *node_after_node = (struct node*)malloc(sizeof(struct node));
    node_after_node->data = data;

    node_after_node->next_link = before_node->next_link;
    before_node->next_link = node_after_node;

    return head;
}