#include <stdio.h>
#include <stdlib.h>

void num(int);
void show();

struct Node {
     int num; 
     struct Node *next; 
};


// int *next;
// int *p;

struct Node *head1 = NULL;
struct Node *tail1 = NULL;
struct Node *head2 = NULL;
struct Node *tail2 = NULL;


void create(int l1, int l2) {

    printf("The letter is %d\n", l1); // num for l1
    printf("The letter is %d\n", l2); // num for l2
    if (l1 != -1) {
        struct Node *temp = (struct Node *) malloc (sizeof(struct Node)); // box creation
        temp->num = l1; // setting initial value of the box
        temp->next = NULL; // setting next value of the box to be NULL
         if (head1 == NULL){
            head1 = tail1 = temp;
        } else {
            tail1->next  = temp;
            tail1 = tail1->next;
        }
    
    }
    if (l2 != -1) {   
        struct Node *temp = (struct Node *) malloc (sizeof(struct Node)); // box creation
        temp->num = l2;
        temp->next = NULL;
        if (head2 == NULL){
            head2 = tail2 = temp;
        } else {
            tail2->next  = temp;
            tail2 = tail2->next;
        }
    }
    
    // printf("the values inside temp node => %d\n", temp->num);
    // printf("The address in next should be NULL => %x\n", temp->next);
    
}

void show() {
    struct Node *temp = head1;
    while (temp != NULL) {
        printf("-> %d\t", temp->num);
        temp = temp->next;
    }
    printf("\n");

    temp = head2;
    while (temp != NULL) {
        printf("-> %d\t", temp->num);
        temp = temp->next;
    }
    printf("\n");
}

void delete(char letter) { 

}


int main() {

    create(2, 5); 
    create(4, 6);
    create(3, 4);
    show();
    return 0;
}
