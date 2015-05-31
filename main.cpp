#include <stdio.h>
#include "Card.h"

int main()
{
    printf("Hello, world!\n");
    Card cards[100];

    for ( int i = 0 ; i < 100 ; i++ )
        printf("\t%c:%c\n", cards[i].figure(), cards[i].color());
}
