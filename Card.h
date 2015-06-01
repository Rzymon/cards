#pragma once

class Card
{
    static int counter;
    static char *colors, *figures;
    int value;

public:
    Card();
    char figure();
    char color();
};
