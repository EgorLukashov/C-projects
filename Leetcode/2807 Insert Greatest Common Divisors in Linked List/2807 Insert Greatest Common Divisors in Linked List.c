//
// Created by legor on 16.10.2023.
//
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
 };

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if (head->next == NULL) {
        return head;
    } else {
        struct ListNode* p = head;
        while (p->next != NULL) {
            int val1 = p->val;
            int val2 = p->next->val;
            int gcd = 1;

            for (int i = 1; i <= val1 && i <= val2; i++) {
                if (val1 % i == 0 && val2 % i == 0) {
                    gcd = i;
                }
            }

            struct ListNode* newNode = malloc(sizeof(struct ListNode));
            newNode->val = gcd;
            newNode->next = p->next;
            p->next = newNode;

            p = p->next->next;
        }
    }
    return head;
}

int main(){
    struct ListNode* head= malloc(sizeof(struct ListNode));
    head->val=2;

    struct ListNode* elem2= malloc(sizeof(struct ListNode));
    head->next=elem2;
    elem2->val=5;
    elem2->next=NULL;

    struct ListNode* p= insertGreatestCommonDivisors(head);

    while (p!=NULL){
        printf("%d ",p->val);
        p=p->next;
    }
    return 0;
}





typedef struct {
    int val;
    struct MyLinkedList* next;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList* head=malloc(sizeof(MyLinkedList));
    head->val=0;
    head->next=NULL;
    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    int count=0;
    MyLinkedList* p=obj;
    while(p!=NULL){
        if(count==index){
            return p->val;
        }
        count++;
        p=p->next;
    }
    return -1;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    MyLinkedList* newHead = malloc(sizeof(MyLinkedList));
    newHead->val=val;
    newHead->next=obj;
    obj=newHead;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    MyLinkedList* p=obj;
    while(p->next!=NULL){
        p=p->next;
    }
    MyLinkedList* newNode = malloc(sizeof(MyLinkedList));
    newNode->val=val;
    newNode->next=NULL;
    p->next=newNode;
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