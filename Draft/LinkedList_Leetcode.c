//
// Created by legor on 15.10.2023.
//

#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int val;
    struct MyLinkedList* pointer;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList* head=malloc(sizeof (MyLinkedList));
    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    int count=0;
    MyLinkedList* copy=obj;
    if(obj!=NULL){
        count++;
    }
    if(count==index){
        return copy->val;
    }
    return -1;

}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {

}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {

}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {

}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {

}

void myLinkedListFree(MyLinkedList* obj) {

}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);

 * myLinkedListAddAtHead(obj, val);

 * myLinkedListAddAtTail(obj, val);

 * myLinkedListAddAtIndex(obj, index, val);

 * myLinkedListDeleteAtIndex(obj, index);

 * myLinkedListFree(obj);
*/
int main(){
    MyLinkedList* obj = myLinkedListCreate();
    int index=1;
    int param_1 = myLinkedListGet(obj, index);
    if(param_1==0){
        printf("Такого значения не существует");
    }

    return 0;
}