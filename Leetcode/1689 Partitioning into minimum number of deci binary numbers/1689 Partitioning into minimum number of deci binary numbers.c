//
// Created by legor on 19.09.2023.
//
#include <stdio.h>
int minPartitions(char * n);

int main(){
    char arr[2]={'5','1'};
    int res=0;
    res=minPartitions(arr);
    printf("%d", res); //либо можно печатать char, тогда нужно убрать return biggest-48;
    return 0;
}



int minPartitions(char * n){
    int size=0;
    char* copy_ptr=n;
    while(*copy_ptr!='\0'){
        size++;
        copy_ptr+=1;
    }

    int count[size];
    for(int j=0;j<size;j++) {
        //printf("%d",(int) *n);
        for (int i = 0; i < (int)*n; i++) {
            if(i==0) {
                count[j]=0;
            }
            count[j]++;
        }
        n+=1;
    }
    int biggest=0;
    for(int i=0;i<size;i++){
        if(biggest<count[i]){
            biggest=count[i];
        }
    }
    return biggest-48;
}