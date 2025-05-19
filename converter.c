#include "converter.h"

double from_meters(double value, const char *unite)
{
    /* convertit un evaleur en partant des unites vers un autre systemes d'unites*/

    if (strcmp(unite,"m") == 0)
    {
        return value;
    }
    else if (strcmp(unite,"km") == 0)
    {
        return value / 1000.;
    }
    

}

