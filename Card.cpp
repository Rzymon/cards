#include "Card.h"
#include <stdio.h>

int Card::counter = 0;

Card::Card()
{
    value = counter++;
    if ( counter > 52 ) 
        counter = 0;
}

char Card::figure()
{
    static char figures[] = "234567890JQKA";
    return figures[value % 13];
}

char Card::color()
{
    static char colors[] = "PKTA";
    return colors[value / 13];
}
