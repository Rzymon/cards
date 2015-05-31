#include "Card.h"
#include <stdio.h>

int Card::counter = 0;
char *Card::colors = "ABCD";
char *Card::figures = "234567890JQKA";

Card::Card()
{
    value = counter++;
    if ( counter > 52 ) 
        counter = 0;
}

char Card::figure()
{
    return figures[value % 13];
}

char Card::color()
{
    return colors[value / 13];
}
