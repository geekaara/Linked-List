#include <stdio.h>
#include <stdlib.h>
struct Node{
    int num;
    struct node* next;
}Node;
struct Node* head;
void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->num = x;
    temp->next = head;
    //if(head != NULL) temp -> next = head;
    head =temp;
}
void Print(){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d", temp -> num);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    int n,i,x;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number\n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    return 0;
}
