//
// Created by legor on 20.09.2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>//новые интовые типы!!
#define PAGES 336
#define WORDS 65618
int main(){
    /*printf("Тип int имеет размер %zd байт(ов).\n", sizeof(int));
    printf( "Тип char имеет размер %zd байт(ов).\n", sizeof(char));
    printf("Тип long имеет размер %zd байт(ов). \n", sizeof(long));
    printf(" Тип long long имеет размер %zd байт(ов). \n",
    sizeof(long long));
    printf("Tип double имеет размер %zd байт(ов) .\n",
           sizeof (double) ) ;
    printf("Тип long double имеет размер %zd байт(ов).\n",
           sizeof(long double)) ;*/
    /*char name[20];
    printf("Это кто?\n");

    for(int i=0; i<20;i++)
        scanf("%c",name+i);

    for(int i=0; i<20;i++)
        printf("%c", name[i]);*/
    /*int num=234567;
    float f1=13.1;
    printf("%10d\n", num);
    printf("значение %f", f1);*/
    /*short num = PAGES;                              //стр 139 учебник по СИ. Если спецификатор меньше числа, то он отбрасывает лишнюю часть и выводит число меньшего размера
    short mnum = -PAGES;
    printf("num как тип short и тип unsigned short: %hd %hu\n", num,
           num) ;
    printf("-num как тип short и тип unsigned short: %hd %hu\n", mnum,
           mnum);
    printf("num как тип int и тип char: %d %c\n", num, num);
    printf("WORDS как тип int, short и char: %d %hd %c \n",
           WORDS, WORDS, WORDS);*/
    int num1,num2;
    scanf("%d%d", &num1,&num2);
    printf("%d %d", num1, num2);
    return 0;
}






