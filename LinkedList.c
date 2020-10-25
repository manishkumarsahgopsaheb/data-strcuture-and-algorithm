#include<stdio.h>
#include<stdlib.h>

// ****************** creating of a node **************

// struct node
// {
//     int data;
//     struct node *link;
// };

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

// int main()
// {
//     struct node *head = malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     struct node *current = malloc(sizeof(struct node));
//     current->data = 98;
//     current->link = NULL;
//     head->link = current;

//     current = malloc(sizeof(struct node));  // yah i can use the current poiter varaible again, it can move but  i have to give the size of memory once again
//     current->data = 3;
//     current->link = NULL;

//     head->link->link = current;

//     return 0;
// }