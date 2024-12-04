#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *link;
};
void count_of_nodes(struct node *head){
int count=0;
if(head==NULL){
    printf("Linked list is empty");
}
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL){
    count++;
ptr=ptr->link;
}
printf("%d",count);
}
//print function
void print_data(struct node *head){

if(head==NULL){
    printf("linked list is empty");
}
struct node *ptr=NULL;
ptr=head;
while(ptr!=NULL){
    printf("%d",ptr->data);
    ptr=ptr->link;
}


}
void add_to_end(struct node *head,int data){

struct node *ptr,*tmp;
ptr=head;
tmp=(struct node*)malloc(sizeof(struct node));
tmp->data=data;
tmp->link=NULL;
while(ptr->link!=NULL){
    ptr=ptr->link;
}
ptr->link=tmp;
}

int main(){

    struct node *head=malloc(sizeof(struct node));

    head->data=45;
    head->link=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=80;
    current->link=NULL;



    //count_of_nodes(head);



    head->link->link=current;
      add_to_end(head,67);

        print_data(head);


    //count_of_nodes(head);
    //add_to_end(head,67);








return 0;
}
