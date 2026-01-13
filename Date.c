
#include <ctype.h>
#include <stdlib.h>
// Date_filler.dll

#define date_size 4
int datevalidater(int *date_arr);
int datearrangment(char *date, int *date_arr);
int values(char *date, int start, int end);

int datearrangment(char *date, int *date_arr)
{

    date_arr[1] = values(date, 0, 3);
    date_arr[2] = values(date, 4, 5);
    date_arr[3] = values(date, 6, 7);

    return datevalidater(date_arr);
}

int datevalidater(int *date_arr)
{

    int year = date_arr[1];
    int month = date_arr[2];
    int day = date_arr[3];
    if (month < 0 || month > 12)
    {
        return 0;
    }
    int valid_date_range = 30 + (month + (month / 8)) % 2;

    if ((month == 2))
    {
        int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if (isLeap)
        {
            if (day > 29)
            {

                return 0;
            }
        }
        else
        {

            if (day > 28)
            {

                return 0;
            }
        }
    }
    if (day >= 0 && day <= valid_date_range)
    {

        return 1;
    }

    return 0;
}

int values(char *date, int start, int end)
{
    int length = end - start + 1;

    char number[length + 1];
    int index = 0;
    for (int i = 0; i < length; i++)
    {

        number[i] = date[i + start];
        index++;
    }
    number[index] = '\0';

    return atoi(number);
}
