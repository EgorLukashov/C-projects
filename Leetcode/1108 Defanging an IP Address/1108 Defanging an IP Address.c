#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
// Created by legor on 15.09.2023.
//

//Опять два решения задачи!
char * defangIPaddr(char * address);

int main(){

    char ipv4[]={'1','.','2','.','1','.','1'};

    char* res=defangIPaddr(ipv4);
    for(int i =0; i<13; i++){

        printf("%c",res[i] );
        fflush(stdout);
    }
    return 0;
}
/*
char * defangIPaddr(char * address){

    char* res=(char*)malloc(1000 * sizeof(char));
    int size=strlen(address);
    int j=0;
    for(int i=0; i<size;i++,j++){

        if(address[i]=='.'){
            res[j]='[';
            res[j+1]=address[i];
            res[j+2]=']';
            j=j+2;
        } else{
            res[j]=address[i];
        }
    }
    res[j++]='\0';
    return res;
}*/



char * defangIPaddr(char * address){
    int counter=0;
    while (address[counter] != '\0') {
        counter++;
    }

    char* res=(char*)malloc((3*counter) * sizeof(char));
    //int size=strlen(address);
    int j=0;
    for(int i=0; i<counter;i++){

        if(address[i]=='.'){
            res[j]='[';
            res[j+1]=address[i];
            res[j+2]=']';
            j=j+3;
        } else{
            res[j]=address[i];
            j++;
        }
    }
    res[j++]='\0';
    return res;
}
