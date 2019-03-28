#include <stdio.h>
#include<stdlib.h>
struct Node{
    int num;
    struct Node* next;
};
struct Node* head;
int main()
{
    int n;
    head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> num = 2;
    head -> next = NULL;
    printf("%d",head->num);
    return 0;
}
