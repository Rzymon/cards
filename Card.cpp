#include "Card.h"

Card::Card()
{
    static int counter = 0;
    value = counter++;
    counter %= 52;
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

Card* Card::deck()
{
    return new Card[52];
}
