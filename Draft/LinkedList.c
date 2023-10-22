//
// Created by legor on 14.10.2023.
//
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* NextNodePtr;
};

/*struct Node* push(struct Node* head, int data ){
    struct Node* tmp=malloc(sizeof(struct Node));
    tmp->val=data;
    tmp->NextNodePtr=head;
    head=tmp;
    return
}*/






void push(struct Node** head, int data){
    struct Node* tmp=malloc(sizeof (struct Node));
    tmp->val=data;
    tmp->NextNodePtr=head;
    head=tmp;

}

int main(){
    struct Node* head= malloc(sizeof (struct Node));
    head->val=2;
    struct Node* Second_Node=malloc(sizeof (struct Node));
    head->NextNodePtr=Second_Node;
    Second_Node->val=5;
    Second_Node->NextNodePtr=NULL;

    struct Node* tmp=head;
    while(tmp!=NULL){
        printf("%d ", tmp->val);
        tmp=tmp->NextNodePtr;
    }



    /*struct Node head;
    struct Node Second;

    head.val=3;
    head.NextNodePtr=&Second;
    printf("%d\n",head.val);
    printf("%p\n",head.NextNodePtr);
    Second.val=3;
    Second.NextNodePtr=NULL;
    printf("%d\n",Second.val);
    printf("%p\n",Second.NextNodePtr);*/
    /*push(head, 4);
    printf("%d",head->val);*/




    return 0;
}