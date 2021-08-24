#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK 12

struct dataStack{
    int top;
    char data[10];
}tumpukan;

void inisialisasi(){
    tumpukan.top = -1;
}

int isFull(){
    if(tumpukan.top == MAX_STACK-1)return 1;
    else return 0;
}

int isEmpty(){
    if(tumpukan.top == -1)return 1;
    else return 0;
}

void pushStack(char inputan){
    tumpukan.top++;
    tumpukan.data[tumpukan.top] = inputan;
}

void popStack(){
    printf("\nData yang diambil = %c", tumpukan.data[tumpukan.top]);
    tumpukan.top--;
}

void tampil(){
    for(int i=tumpukan.top;i>=0;i--){
        printf("\nData %i = %c", i, tumpukan.data[i]);
    }
}

void clear(){
    tumpukan.top=-1;
}

int main()
{
   int pil;
   inisialisasi();
   char dt;
   do{ system("cls");
        printf("1. push\n");
          printf("2. pop\n");
          printf("3. print\n");
          printf("4. clear\n");
          printf("5. exit\n");
          printf("Pilihan : ");
          scanf("%d",&pil);
          switch(pil)
          {
          case 1: if(isFull() != 1)
                       { printf("Data = ");scanf("%s", &dt);
                         pushStack(dt); }
                        else printf("\nSudah penuh!\n");
                        break;
           case 2: if(isEmpty() != 1)
                        popStack();
                        else
                        printf("\nMasih kosong!\n");
                        break;
           case 3: if(isEmpty() != 1)
                        tampil();
                        else
                        printf("\nMasih kosong!\n");
                        break;
           case 4: clear();
                        printf("\nSudah kosong!\n");
                        break;
            }
            printf("\nTekan Enter");
           getch();
        } while(pil != 5);
     getch();
}
