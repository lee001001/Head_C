#include <stdio.h>
#include <stdlib.h>
int main()
{
    char cards[] ="JQK";
    char a_card = cards[2];
    cards[2] = cards[1]; // JQQ
    cards[1] = cards[0]; // JJQ
    cards[0] = cards[2]; // QJQ
    cards[2] = cards[1]; // QJJ
    cards[1] = a_card;   // QKJ
    puts(cards);
    return 0;
}



