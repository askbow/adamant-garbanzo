#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//time and date:
#include <time.h>

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

//TIME:
//using time:
time_t sec = time(NULL); //get curr time in seconds
printf("hours since UNIX epoch start:\t%ld\n", sec/3600);

printf("                  this means:\t%s\n",ctime(&sec));
//making time:
struct tm str_time; //time constructor
time_t time_of_day;
str_time.tm_year = 1991-1900;
str_time.tm_mon  = 4;
str_time.tm_mday = 12;
str_time.tm_hour = 10; //can't use arrows here...
str_time.tm_min  = 55;
str_time.tm_sec  = 31;
str_time.tm_isdst= 0;

time_of_day = mktime(&str_time);//dates before UNIX epoch start will return NULL
sec = sec - time_of_day;
printf("It was about %ld seconds ago,", sec);
printf(" on %s\n", ctime(&time_of_day));

//measure time of execution:
time_t start,end;
volatile long unsigned counter;
volatile long unsigned  dada=12345;
start = time(NULL);
for(counter = 0; counter<500000000; counter++)
{
    //i was supposed to do nothing, but i can't allow optimizations to get in the way
    dada = dada * counter;
    //too fast...
}
end = time(NULL);
printf("The loop used %f seconds.\n", difftime(end, start));

//ticks:
clock_t ticks;
ticks = clock();
printf("We're up for %f ticks.\n", ticks);



//next section afterwards:
printf("DONE with Time");
for(i = 1; i<42; i++) printf("=");
printf("\n\n\n");
//

//random:
int y, n;
time_t tmtm;
n = 5; //number of random numbers to generate
srand((unsigned) time(&tmtm)); //initializes p-random gen to time
for( y = 0; y <n ; y++)
{
    printf("%d\t", rand() % 50); //50 is the upper limit for the gen
}
//let's repeat time measurement again with rnd:
start = time(NULL);
for(counter = 0; counter<500000000; counter++)
{
    dada = (rand() % 500) * counter;
    //slower!
}
end = time(NULL);
printf("The loop with rand() used %f seconds.\n", difftime(end, start));


//next section afterwards:
printf("DONE with Random");
for(i = 1; i<42; i++) printf("=");
printf("\n\n\n");
//

//strings

//strcpy() - copy one string into another
char s1[256], s2[256];
strcpy(s1, "qwertyuiop");
strcpy(s2, "asdfghjkl;");
printf("initial strings:\t%s\t%s\n",s1,s2);
strcpy(s1,s2);
printf("copied  strings:\t%s\t%s\n",s1,s2);
//strcat() - concatenate strings
strcat(s1,s2);
printf("joined  string:\t%s\n",s1);
//strncat() - strcat for N chars of the second string
strncat(s1,s2,3);
printf("joined  string:\t%s\n",s1);
//re-init strings
strcpy(s1, "qwertyuiop");
strcpy(s2, "asdfghjkl;");
//strcmp() - compare
if(strcmp(s1,s2)==0) strcpy(s1, "qwertyuiop");
printf("copied  strings:\t%s\t%s\n\n",s1,s2);
//strchr() - find char occurence
char *what = "stuff=happens=right";
char *pointp;
pointp = what;
printf(pointp); //can i do it to pointers? yep
printf("\n=>\n");
while((pointp = strchr(pointp, "="))!= NULL) //doesn't work as expected by the book
{
    printf(++pointp); //increment before use
    printf("\n=>\n");
}
printf("\n=>\n");
printf(pointp);
printf("\n=>\n");


    return 0;
}
