#include <stdio.h>

struct Node{
    int value;
    struct Node *next;
};

struct Node constr(int val){
    struct Node result = {val, NULL};
    return result;
}

void insert_node(struct Node *ll, 
                struct Node *predecessor, 
                struct Node *insertable){
                    struct Node *next = ll;
                    while (next != NULL) {
                        if (predecessor == next) {
                            insertable->next = predecessor->next;
                            predecessor->next = insertable;
                            break;
                        }
                        next = next->next;
                    }
                }
                
void print_list(struct Node *ll){
    struct Node *next = ll->next;
    while (next != NULL) {
        printf("%d ", next->value);
        next = next->next;
    }
    printf("\n");
}

void delete_node(struct Node *ll, 
                struct Node *deletable){
                    struct Node *next = ll;
                    while (next != NULL) {
                        if (next->next == deletable){
                            next->next = deletable->next;
                            break;
                        }
                        next = next->next;
                    }
                }

int main(){
    struct Node head = constr(0);
    
    struct Node first = constr(3);
    struct Node second = constr(5);
    struct Node third = constr(7);
    
    
    insert_node(&head, &head, &first);
    insert_node(&head, &first, &second);
    insert_node(&head, &second, &third);
    print_list(&head);
    
    delete_node(&head, &second);
    print_list(&head);
    
    return 0;
}