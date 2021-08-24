#include<stdio.h>
#include<stdlib.h>

//Inisialisasi struct
struct STACK{
	int data;
	struct STACK* next;
};

int isEmpty(struct STACK* tester){
	return !tester;
}

void push(struct STACK** tester, int value){
	struct STACK* stack = (struct STACK*)malloc(sizeof(struct STACK));
	stack->data = value;
	stack->next = NULL;
	stack->next = *tester;
	*tester = stack;
	printf("%d sudah dimasukkan di stack\n", value);
}

int pop(struct STACK** tester){
	if(isEmpty(*tester)) return 0;

	struct STACK* temp = *tester;
	*tester = (*tester)->next;

	int index = temp->data;
	return index;
}

void main(){
	struct STACK* percobaan = NULL;

	push(&percobaan, 10);
	push(&percobaan, 20);
	push(&percobaan, 30);

	printf("%d diambil dari stack\n", pop(&percobaan));
	printf("%d diambil dari stack\n", pop(&percobaan));
}
