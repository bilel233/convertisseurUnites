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

double to_meters(double v, const char *u)
{
    /*convertit la valeur v en un autre systeme d'unites (les metres)*/

    if (strcmp(u,"m") == 0)
    {
        return v; // on a deja des metres

    }
    else if (strcmp(u,"km") == 0)
    {
        return v * 1000.;
    }
    else 
    {
        fprintf(stderr, "unites de longueur inconnue : %s\n",u);
    }


}

