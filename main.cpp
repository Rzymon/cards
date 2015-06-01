#include <stdio.h>
#include "Card.h"

int main()
{
    Card *cards = Card::deck();

    for ( int i = 0 ; i < 52 ; i++ )
        printf("%c%c\t", cards[i].figure(), cards[i].color());

    printf("\nOto karty były\n");


}
