#pragma once

class Card
{
    static int counter;
    int value;
    static char *colors;
    static char *figures;
public:
    Card();
    char figure();
    char color();
};
