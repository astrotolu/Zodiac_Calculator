#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char zodiac_sign(int, char *); // check zodiac sign
// void converttoLC(char *); //convert month to lower case

int main()
{
    int _day = 0;
    char *_month = {0};

    printf("\nEnter your birth day: ");
    scanf("%d", &_day);
    printf("\nEnter ypur birth month: ");
    scanf("%s", &_month);

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

char zodiac_sign(day, month)
{
    // int day = 0;
    // char month = {0};

    // converttoLC(month);

    char astro_sign[20] = {0};

    if (month == "december")
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

    else if (month == "january")
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
    else if (month == "februray")
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
    else if (month == "march")
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
    else if (month == "may")
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
    else if (month == "june")
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
    else if (month == "july")
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
    else if (month == "august")
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
    else if (month == "september")
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
    else if (month == "october")
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
    else if (month == "november")
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

    printf("%s", astro_sign);
}