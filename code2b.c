#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char zodiac_sign(int, char *); // check zodiac sign
// void converttoLC(char *); //convert month to lower case

int main()
{
    int day = 0;
    char month[35] = {'\0'};

    printf("\nEnter your birth day: ");
    scanf("%d", &day);
    printf("\nEnter ypur birth month: ");
    scanf("%s", &month);

    printf("\nYour zodiac sign is  %s", zodiac_sign(day, month));
}

// void converttoLC(char *month)
// {
//     int x;

//     for (x = 0; x < 15; x++)
//     {

//         month[x] = tolower(month[x]);
//     }

//     return month[x];
// }

#define DECEMBER "december"
#define JANUARY "january"
#define FEBRUARY "februray"
#define MARCH "march"
#define APRIL "april"
#define MAY "may"
#define JUNE "june"
#define JULY "july"
#define AUGUST "august"
#define SEPTEMBER "september"
#define OCTOBER "october"
#define NOVEMBER "november"

char zodiac_sign(int day, char *month)
{
    // int day = 0;
    // char month[12] =

    // converttoLC(month);

    char *astro_sign = {'\0'};

    if (strcmp(month, DECEMBER) == 0)
    {

        if (day < 22)
        {

            astro_sign = "Sagittarius";
        }
        else
        {
            astro_sign = "Capricorn";
        }
    }

    else if (strcmp(month, JANUARY) == 0)
    {

        if (day < 20)
        {

            astro_sign = "Capricorn";
        }
        else
        {
            astro_sign = "Aquarius";
        }
    }
    else if (strcmp(month, FEBRUARY) == 0)
    {

        if (day < 19)
        {

            astro_sign = "Aquarius";
        }
        else
        {

            astro_sign = "pisces";
        }
    }
    else if (strcmp(month, MARCH) == 0)
    {

        if (day < 21)
        {

            astro_sign = "pisces";
        }
        else
        {
            astro_sign = "aries";
        }
    }
    else if (strcmp(month, APRIL) == 0)
    {

        if (day < 20)
        {

            astro_sign = "aries";
        }
        else
        {

            astro_sign = "taurus";
        }
    }
    else if (strcmp(month, MAY) == 0)
    {

        if (day < 21)
        {

            astro_sign = "taurus";
        }
        else
        {

            astro_sign = "gemini";
        }
    }
    else if (strcmp(month, JUNE) == 0)
    {

        if (day < 21)
        {

            astro_sign = "gemini";
        }
        else
        {

            astro_sign = "cancer";
        }
    }
    else if (strcmp(month, JULY) == 0)
    {

        if (day < 23)
        {

            astro_sign = "cancer";
        }
        else
        {
            astro_sign = "leo";
        }
    }
    else if (strcmp(month, AUGUST) == 0)
    {

        if (day < 23)
        {

            astro_sign = "leo";
        }
        else
        {
            astro_sign = "virgo";
        }
    }
    else if (strcmp(month, SEPTEMBER) == 0)
    {

        if (day < 23)
        {

            astro_sign = "virgo";
        }
        else
        {

            astro_sign = "libra";
        }
    }
    else if (strcmp(month, OCTOBER) == 0)
    {

        if (day < 23)
        {

            astro_sign = "libra";
        }
        else
        {

            astro_sign = "scorpio";
        }
    }
    else if (strcmp(month, NOVEMBER) == 0)
    {

        if (day < 22)
        {

            astro_sign = "scorpio";
        }
        else
        {

            astro_sign = "sagittarius";
        }
    }

    return astro_sign;
}