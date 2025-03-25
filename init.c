#include <stdio.h>

// GLOBAL SCOPE
int g_NumPersons = 0;

void some_other_functions()
{
    int personaID = 1;
}

int main() 
{
    //type name = initial value
    int personaID = 0;

    personaID += 1;
    {
        int personaID = 0;
        personaID += 2;
    }
}
