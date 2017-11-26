// Filename: dictionary-example.c
// Descriptions: The main goal of this code is to show malloc in use - dynamically allocating memory
//               to dat structures.
//
//               Some example code that shows how malloc and return from void/ casting pointers
//               can be used. The code below is drawn from the crawler implementation.
//               While it is imcomplete code it illustrates how important data structures
//               such as the DICTIONARY, DNODE and URLNODE dynamically created using malloc.
//
//               A note on the dictionary:
//               A dictionary provides general purpose data structure based on a hash table
//               where data elements (in this case URLNODEs) are assigned with a key and stored in DNODE.
//               The full blown dictionary functions (not presented below) provide the code for
//               adding/removing/searching data elements (URLNODEs) inside the dictionary
//               at super fast  speed.


#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
//#include "dictionary.h"
//#include "header.h"

// Unlikely to have more than an a URL longer that 1000 chars.
// The KEY is the same as a URL. The term KEY is just a
// general Dictionary/hash function term

#define KEY_LENGTH 1000

// Maximum number of hash slot in the hash table within dictionary

#define MAX_HASH_SLOT 10000

// These structures are defined in the header file dictionary.h but I put them here for ease of
// discussion.

typedef struct _DNODE {
  struct _DNODE* next;
  struct _DNODE* prev;
  void* data;            // actual data, in this case pointer to a URLNODE
  char key[KEY_LENGTH];  // the actual key, in this case the URL
} __DNODE;

typedef struct _DNODE DNODE;

// The DICTIONARY holds the hash table and the start and end pointers into a double
// link list. This is a unordered list with the exception that DNODES with the same key (URL)
// are clusters along the list. So you hash into the list. Check for uniqueness of the URL.
// If not found add to the end of the cluster associated wit the same URL. You will have
// to write an addElement function.

typedef struct _DICTIONARY {
  DNODE* hash[MAX_HASH_SLOT]; // the hash table of slots, each slot points to a DNODE
  DNODE* start;               // start of double link list of DNODES terminated by NULL pointer
  DNODE* end;                 // points to the last DNODE on this list
} __DICTIONARY;

typedef struct _DICTIONARY DICTIONARY;

// The max length of each URL path.
#define MAX_URL_LENGTH 1000

// store the information of each URL.
typedef struct _URL{
  char url[MAX_URL_LENGTH];      //!< e.g., www.cs.dartmouth.edu
  int depth;                     //!<  depth associated with this URL.
  int visited;                   //!<  crawled or not, marked true(1), otherwise false(0)
} __URL;

typedef struct _URL URLNODE;

// These dummy routine just return a fixed value to keep the main code happy

unsigned long hash=20;

int make_hash(char *c)
{
  return(hash);
}

int  main(void){

  // Set up a dummy URL and depth

  char  *url="http://www.cs.dartmouth.edu/~campbell/";
  int   depth = 1;

  // Initialise the dictionary data structure

  DICTIONARY *dict = (DICTIONARY *)malloc(sizeof(DICTIONARY));
  MALLOC_CHECK(dict);
  BZERO(dict, sizeof(DICTIONARY));

  // Set up a URLNODE

  URLNODE *n = (URLNODE *)malloc(sizeof(URLNODE));
  MALLOC_CHECK(n);
  n->depth = depth;
  n->visited = 0;
  BZERO(n->url, sizeof(n->url));
  strncpy(n->url, url, strlen(url));

  //  At this point we would call a function that would add the URLNODE to
  //  the dictionary if it did not already exist; for example, DAdd(dict, n, url);
  //  Here is a little of the code in that function. It is of course incomplete.

  int h = make_hash(url);

  if (dict->start == NULL) {
    MYASSERT(dict->end == NULL);
    DNODE *d = (DNODE *)malloc(sizeof(DNODE));
    MALLOC_CHECK(d);
    BZERO(d, sizeof(DNODE));
    dict->hash[h] = d;
    d->next = d->prev = NULL;
    d->data = n;
    // you would need to copy the key over here
    dict->start = dict->end = d;

    printf("The DICTIONARY structure dict:\n");
    printf("dict %p\n",(void *)dict);
    printf("hash %lu\n", hash);
    printf("dict->hash[hash] %p\n",(void *)dict->hash[hash]);
    printf("dict->start %p\n",(void *)dict->start);
    printf("dict->end %p\n",(void *)dict->end);

    printf("The DNODE structure d:\n");
    printf("d %p\n",(void *)d);
    printf("d->next %p\n",(void *)d->next);
    printf("d->prev %p\n",(void *)d->prev);
    printf("d->data %p\n",(void *)d->data);
    printf("d->key is not initialized in this example\n");

    printf("The URLNODE structure:\n");
    printf("n %p\n",(void *)n);
    printf("n->url %s\n",n->url);
    printf("n->visited %d\n",n->depth);
    printf("n->visited %d\n",n->visited);

  } else {
    // need to check if the DNODE already exists
    // If it does not exist then initial DNODE and
    // link in URLNODE
  }
  return 0;
}
