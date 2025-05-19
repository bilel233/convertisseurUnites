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
    else 
    {
        fprintf(stderr, "unites de longueur inconnue : %s\n",unite);
        return EXIT_FAILURE;
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
        return EXIT_FAILURE;
    }


}

double converter_length(double v, const char *from, const char *to)
{
    /* convertir une longueur d'un systeme d'unites vers un autre*/

    double m = 0;
    m = to_meters(v,from);
    return from_meters(m,to);
}


double to_grams(double v, const char *u)
{
    /* convertit une valeur dans son SI en grammes*/

    if (strcmp(u,"g") == 0)
    {
        return v;

    }
    else if (strcmp(u,"kg") == 0)
    {
        return v * 1000.;
    }
    else 
    {
        fprintf(stderr, "unites de longueur inconnue : %s\n",u);
        return EXIT_FAILURE;
    }


}

double from_grams(double v, const char *u)
{
    /*on part du gramme vers un autre systeme de mesure*/

    if (strcmp(u,"m") == 0)
    {
        return v;
    }
    else if (strcmp(u,"kg") == 0)
    {
        return v / 1000.;
    }
    else 
    {
        fprintf(stderr, "unites de longueur inconnue : %s\n",unite);
        return EXIT_FAILURE;
    }


}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr,"Usage : %s <valeur> <unité_source> <unité_cible>\n", argv[0] );
        return EXIT_FAILURE;
    }
    
    double val = atof(argv[1]);
    const char *unite1 = argv[2];
    const char *unite2 = argv[3];
    double res = 0.;
    if (strcmp(unite1,"m") == 0 || strcmp(unite1,"km") == 0)
    {
        res = converter_length(val,unite1,unite2);
    }
    printf("%g %s = %g %s\n", val, unite1, res, unite2);
    
}
