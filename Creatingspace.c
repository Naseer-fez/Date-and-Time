#include<stdlib.h>


int*allocatiing_memory_date(int Foramt){
int size_or_arr=9;

int *arr=(int*)malloc(sizeof(int)*size_or_arr);

arr[0]=Foramt;
return arr;

}