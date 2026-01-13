#include <ctype.h>
#include <stdio.h>

// int day_of_year(int*date_arr){
// int format=date_arr[0];
// int day=(date_arr[1]*10)+(date_arr[2]);
// int month=(date_arr[3]*10)+(date_arr[4]);

// }

#define date_size 9

int Day_of_the_year(int *date_arr, int format)
{

    int day = (date_arr[1] * 10) + (date_arr[2]);
    int month = (date_arr[3] * 10) + (date_arr[4]);
    int year = (date_arr[5] * 1000) + (date_arr[6] * 100) + (date_arr[7] * 10) + (date_arr[8]);
if (month < 3) {
    month += 12;
    year -= 1;
}
int varaible=(13*(month+1))/5;
int yearofthecenturery=year%100;
int itgoftheyear=year/100;


int date=(day+varaible+
    yearofthecenturery+
    (yearofthecenturery/4)+
    (itgoftheyear)/4
    -(2*itgoftheyear))%7;
int postivemod=(date%7+7)%7;
return postivemod;

}




int main()
{
    int arr[] = {1, 1, 6, 0, 1, 2, 0, 2, 6};
    // int z=day_of_year(arr);

    int a[9];
    printf("%d-->", Day_of_the_year(arr,1));
}