#ifndef CONVERTER_H
#define CONVERTER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double from_meters(double v, const char *u);
double to_meters(double v, const char *u);
double converter_length(double v, const char *from, const char *to);

# endif /*CONVERTER_H*/