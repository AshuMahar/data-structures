
#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;          // Data 
    struct node *next; // Address 
}*head1,*head2;


/* 
 * Functions to create and display list
 */
void createList1(int n);
void createList2(int m);
void traverseList1();
void traverseList2();


int main()
{
    int n,m;

    printf("Enter the total number of nodes in list 1 and 2: ");
    scanf("%d", &n);
    scanf("%d", &m);

    createList1(n);
	createList2(m);
    printf("\nData in the list \n");
    traverseList1();
	traverseList2();
    return 0;
}

/*
 * Create a list of n nodes
 */
void createList1(int n)
{
    struct node *newNode, *temp;
    int data, i;

    head1 = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head1 == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head1->data = data; // Link data field with data
    head1->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head1;
    for(i=2; i<=n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}
void createList2(int m)
{
    struct node *newNode, *temp;
    int data, i;

    head2 = (struct node *)malloc(sizeof(struct node));

    // Terminate if memory not allocated
    if(head2 == NULL)
    {
        printf("Unable to allocate memory.");
        exit(0);
    }


    // Input data of node from the user
    printf("Enter the data of node 1: ");
    scanf("%d", &data);

    head2->data = data; // Link data field with data
    head2->next = NULL; // Link address field to NULL


    // Create n - 1 nodes and add to list
    temp = head2;
    for(i=2; i<=m; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));

        /* If memory is not allocated for newNode */
        if(newNode == NULL)
        {
            printf("Unable to allocate memory.");
            break;
        }

        printf("Enter the data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data; // Link data field of newNode
        newNode->next = NULL; // Make sure new node points to NULL 

        temp->next = newNode; // Link previous node with newNode
        temp = temp->next;    // Make current node as previous node
    }
}


/*
 * Display entire list
 */
void traverseList1()
{
	printf("\n\nEnter elements of list 1\n");
    struct node *temp;

    // Return if list is empty 
    if(head1 == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head1;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
void traverseList2()
{
	printf("\n\nEnter elements of list 2\n");
    struct node *temp;

    // Return if list is empty 
    if(head2 == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head2;
    while(temp != NULL)
    {
        printf("Data = %d\n", temp->data); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}
void sort1()
{
	struct node *temp;
	 if(head2 == NULL)
    {
        printf("List is empty.");
        return;
    }
    
    temp = head;
	
}
