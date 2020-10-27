#include<stdio.h>
#include<stdlib.h>

// ****************** creating of a node **************

struct node
{
    int data;
    struct node *link;
};

// int main()
// {
//     struct node *head = NULL;

//     head = (struct node *)malloc(sizeof(struct node));

//     head->data = 45;
//     head->link =NULL;

//     printf("%d", head->data);
//     return 0;
// }




// ************** creating a complete link list ***************

// struct node
// {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     struct node *head = NULL;  // it is good practice to initialise pointer with a Null value
    
//     head = malloc(sizeof(struct node));  // no need type cast in cast
//     head->data = 45;
//     head->link = NULL;

//     struct node *current = NULL;
//     current = malloc(sizeof(struct node));
//     current->data = 98;
//     current->link = NULL;

//     // till now there is not any connection between head node and current node
//     // now lets establish that connection
//     // and for making that connection we need to update the link part of head

//     head->link = current;
//     return 0;

// }




// ***************** creating link list of three node **************
// see we have two method to do this
// first is just create a third pointer and connect with the second node
// second method is just moving the current node
// lets see

// struct node
// {
//     int data;
//     struct node *link;
// };



// ****************** counting of node **********************

void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
    {
        printf("Linked List is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("\ntotal node in the link list is : %d", count);

}


void print_data(struct node *head)
{
    if(head == NULL)
    {
        printf("Link list is empty");
    }

    struct node *ptr = NULL;
    ptr = head;
    while (ptr!=NULL)
    {               
        printf("data is %d: \n", ptr->data);
        ptr = ptr->link;
    }
    
}

void printing_all_node(struct node *head)
{
    if(head == NULL)
    {
        printf("Link list is empty");
    }
    int count = 0;
    printf("head containing the address of first node i.e: %d\n", head);
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL)
    {   
        count++;
        printf("address of node %d is %d and it containing the data %d and address of next node(its link part) is %d\n",count,ptr, ptr->data, ptr->link);
        ptr = ptr->link;
    }

}

void insert_node_at_end(struct node *head)
{
    if(head == NULL)
    {
        printf("linked list is empty");
    }
    struct node *ptr = NULL;
    struct node *tmp = NULL;
    ptr = head;

    
    while(ptr!=NULL)
    {
        tmp = ptr;
        ptr = ptr->link;
    }
    printf("\naddress of last node before inserting the node at last: %d",tmp);
    printf("\nlink part of last node(i.e address to the next node which is not available) is %d: ",tmp->link);


    printf("\nenter the data you want to insert at the end of the list: ");
    int ldata;
    scanf("%d", &ldata);

    // now lets create a node for last node

    struct node *last_node = malloc(sizeof(struct node));
    printf("\naddress of the inserted node at the last(last node address) is: %d", last_node);
    tmp->link = last_node;
    last_node->link = NULL;
    last_node->data = ldata;

}


int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));  // yah i can use the current poiter varaible again, it can move but  i have to give the size of memory once again
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    // now lets call from here to adding the last node

    printf("\nhow many node you want to insert at the end: ");
    int num;
    scanf("%d", &num);

    for(int i=0;i<num;i++)
    {
        insert_node_at_end(head);
    }

    count_of_nodes(head);
    printf("\n");
    print_data(head);
    printf("\n");
    printing_all_node(head);

    return 0;
}
