#include <stdio.h>
#include "Card.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    Card *cards = Card::deck();

    for ( int i = 0 ; i < 52 ; i++ )
        printf("%c%c\t", cards[i].figure(), cards[i].color());

    printf("\nOto karty były\n");

    for (int k=0; k<52; k++){ int r=k+rand()%(52-k); swap(cards[k] , cards[r]);}

    for ( int i = 0 ; i < 52 ; i++ )
        printf("%c%c\t", cards[i].figure(), cards[i].color());

    printf("\nOto karty są\n");

}
