
#include <stdio.h>
#include <stdlib.h>

typedef struct threaded_bst
{
    int data;
    struct threaded_bst* left;
    struct threaded_bst* right;
    int isLeftThreaded,isRightThreaded;    
};

