#include<stdlib.h>
#include<stdio.h>
#define size 9
int*allocatiing_memory_date(int Foramt){
int size_or_arr=size;

int *arr=(int*)malloc(sizeof(int)*size_or_arr);

arr[0]=Foramt;
return arr;

}
