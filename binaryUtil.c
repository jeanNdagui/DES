#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binaryUtil.h"


char *representationIn64Bits(u_int64_t x)
{
    char *ou, *in;

    if ((ou = malloc(64 * sizeof(*ou))) == NULL || (in = malloc(sizeof(*in))) == NULL)
    {
        printf("Il n’y a pas assez de mémoire \n");
        exit(EXIT_FAILURE);
    }*ou = '\0';

    for (u_char i = 0; i < (8 * sizeof(x)); i++)
    {
        u_char p = x >> ((8 * sizeof(x)) - (i + 1));
        sprintf(in, "%d", (p & LSB64));
        strcat(ou, in);
    }
    free(in);
    return ou;
}

char *representationIn32Bits(u_int32_t x)
{
    char *ou, *in;

    if ((ou = malloc(64 * sizeof(*ou))) == NULL || (in = malloc(sizeof(*in))) == NULL)
    {
        printf("Il n’y a pas assez de mémoire \n");
        exit(EXIT_FAILURE);
    }*ou = '\0';

    for (u_char i = 0; i < (8 * sizeof(x)); i++)
    {
        u_char p = x >> ((8 * sizeof(x)) - (i + 1));
        sprintf(in, "%d", (p & LSB32));
        strcat(ou, in);
    }
    free(in);
    return ou;
}

char *representationIn48Bits(u_int64_t x)
{
    char *ou, *in;

    if ((ou = malloc(64 * sizeof(*ou))) == NULL || (in = malloc(sizeof(*in))) == NULL)
    {
        printf("Il n’y a pas assez de mémoire \n");
        exit(EXIT_FAILURE);
    }*ou = '\0';

    for (u_char i = 0; i < 48; i++)
    {
        u_char p = x >> (48 - (i + 1));
        sprintf(in, "%d", (p & LSB48));
        strcat(ou, in);
    }
    free(in);
    return ou;
}

char *representationIn6Bits(u_int8_t x)
{
    char *ou, *in;

    if ((ou = malloc(64 * sizeof(*ou))) == NULL || (in = malloc(sizeof(*in))) == NULL)
    {
        printf("Il n’y a pas assez de mémoire \n");
        exit(EXIT_FAILURE);
    }*ou = '\0';

    for (u_char i = 0; i < 6; i++)
    {
        u_char p = x >> (6 - (i + 1));
        sprintf(in, "%d", (p & LSB6));
        strcat(ou, in);
    }
    free(in);
    return ou;
}

char *representationIn4Bits(u_int8_t x)
{
    char *ou, *in;

    if ((ou = malloc(64 * sizeof(*ou))) == NULL || (in = malloc(sizeof(*in))) == NULL)
    {
        printf("Il n’y a pas assez de mémoire \n");
        exit(EXIT_FAILURE);
    }*ou = '\0';

    for (u_char i = 0; i < 4; i++)
    {
        u_char p = x >> (4 - (i + 1));
        sprintf(in, "%d", (p & LSB4));
        strcat(ou, in);
    }
    free(in);
    return ou;
}

