#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//a block in a linked list:
struct coolstruct
{
    int data; //value
    struct coolstruct *next; //pointer to another structure of the same type
    //contains the address of the next block of the linked list
};
struct coolstruct *head = NULL; //initial position
struct coolstruct *tail = NULL; //last position

struct coolstruct* create(int val)
{
    printf("create: ");
    //allocates memory for a node:
    struct coolstruct *point = (struct coolstruct*)malloc(sizeof(struct coolstruct));
    if(NULL == point)
    {
        printf("failed\n");
        return NULL;
    }
    point->data = val;
    point->next = NULL;
    head = tail = point; //initialize ref.points
    printf("ok\n");
    return point;
};

struct coolstruct* add(int val)
{
    //on 1st access, create:
    if(NULL == head) return (create(val));

    //add:
    struct coolstruct *point = (struct coolstruct*)malloc(sizeof(struct coolstruct));
    point->data = val;
    point->next = NULL;
    //update reference point:
    tail->next = point;
    tail = point;

    return point;
};

struct coolstruct* lookup(int val, struct coolstruct **prev)
{
    struct coolstruct *point = head; //start lookup from the head
    struct coolstruct *tmp = NULL;
    bool found = false;
    while(point != NULL)
    {
        if(point->data == val)
        {
            found = true;
            break;
        }
        else
        {
            tmp = point;
            point = point->next;
        }
    }
    if(true == found)
    {
        if(prev) *prev = tmp;
        return point;
    }
    else
    {
        return NULL;
    }
};



int main()
{
int i = 0, ret = 0;
struct coolstruct *point = NULL; //init?

for(i = 100; i<1000; i++) add(i*3); //add some values


//print:
point = head; //refer to the start - needed,
printf("===printing\n");
while(point != NULL)
{
    printf("[%d]\t",point->data);  //get current element
    point=point->next; //go to the next element
}
printf("\n");

//search in the list:
point = lookup(1500, NULL);
printf("[%d]\t was found\n",point->data);


//next section afterwards:
printf("DONE with Linked List");
for(i = 1; i<42; i++) printf("=");
printf("\n\n\n");
//









    return 0;
}
