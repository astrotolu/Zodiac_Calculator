#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char *zodiac_sign(int, char *); // check zodiac sign

int main()
{
    int day = 0;
    char month[35] = {'\0'};

    printf("\nEnter your birth day: ");
    scanf("%d", &day);
    printf("\nEnter your birth month: ");
    scanf("%s", &month);

    printf("\nYour zodiac sign is  %s", zodiac_sign(day, month));
}

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

char *zodiac_sign(int day, char *month)
{

    char *astro_sign = NULL;

    if ((strcmp(month, NOVEMBER) == 0 && day >= 22) || (strcmp(month, DECEMBER) == 0 && day <= 21))
    {

        astro_sign = "Sagittarius";
    }

    else if ((strcmp(month, DECEMBER) == 0 && day >= 22) || (strcmp(month, JANUARY) == 0 && day <= 19))
    {

        astro_sign = "Capricorn";
    }
    else if ((strcmp(month, JANUARY) == 0 && day >= 20) || (strcmp(month, FEBRUARY) == 0 && day <= 18))
    {

        astro_sign = "Aquarius";
    }
    else if ((strcmp(month, FEBRUARY) == 0 && day >= 19) || (strcmp(month, MARCH) == 0 && day <= 20))
    {

        astro_sign = "pisces";
    }
    else if ((strcmp(month, MARCH) == 0 && day >= 21) || (strcmp(month, APRIL) == 0 && day <= 19))
    {

        astro_sign = "aries";
    }
    else if ((strcmp(month, APRIL) == 0 && day >= 20) || (strcmp(month, MAY) == 0 && day <= 20))
    {

        astro_sign = "taurus";
    }
    else if ((strcmp(month, MAY) == 0 && day >= 21) || (strcmp(month, JUNE) == 0 && day <= 21))
    {
        astro_sign = "gemini";
    }
    else if ((strcmp(month, JUNE) == 0 && day >= 22) || (strcmp(month, JULY) == 0 && day <= 22))
    {

        astro_sign = "cancer";
    }
    else if ((strcmp(month, JULY) == 0 && day >= 23) || (strcmp(month, AUGUST) == 0 && day <= 22))
    {

        astro_sign = "leo";
    }
    else if ((strcmp(month, AUGUST) == 0 && day >= 23) || (strcmp(month, SEPTEMBER) == 0 && day <= 22))
    {

        astro_sign = "virgo";
    }
    else if ((strcmp(month, SEPTEMBER) == 0 && day >= 23) || (strcmp(month, OCTOBER) == 0 && day <= 23))
    {

        astro_sign = "libra";
    }
    else if ((strcmp(month, OCTOBER) == 0 && day >= 24) || (strcmp(month, NOVEMBER) == 0 && day <= 21))
    {

        astro_sign = "scorpius";
    }
    else
    {

        return printf("\nUndefined\n");
    }

    return astro_sign;
}