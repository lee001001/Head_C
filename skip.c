#include <stdio.h>
#include <stdlib.h>

void skip(char *msg)
{
    puts(msg+6);
}
int main()
{
    
    char *msg_form_amy="Don't Call me!";
    skip(msg_form_amy);
    return 0;
}



