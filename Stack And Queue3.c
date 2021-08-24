#include<stdlib.h>
#include<stdio.h>

struct QUEUE{
	int data;
	struct QUEUE *next, *prev;
}*head, *current, *tail;

void push(int value){
	current = (struct QUEUE*)malloc(sizeof(struct QUEUE));
	current->data = value;
	current->next = current->prev = NULL;

	if(head == NULL){
		head=tail=current;
	}else{
		head->prev=current;
		current->next=head;
		head=current;
	}

	printf("%d dimasukkan di queue\n", value);
}

void pop(){
	if(tail==NULL){
		printf("Tidak ada data");
	}else if(tail == head){
		current = tail;
		head=tail=NULL;
		free(current);
	}else{
		current = tail;
		tail = tail->prev;
		tail->next = NULL;
		free(current);
	}
}

void cetak(){
	if(head!=NULL){
		current = head;
		while(current != NULL){
			printf("\n%d", current->data);
			current = current->next;
		}
	}
}

void main(){
	push(10);
	push(20);
	push(30);
	pop();
	cetak();
}
