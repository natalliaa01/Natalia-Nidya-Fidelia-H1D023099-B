#include <iostream>
using namespace std;
typedef struct node *alamat;
#MAXSTACK 10;

struct stack{
    int data;
    alamat next;
};
alamat first, last;

void push (int data){
    if (first=NULL){
        first=new node;
    }else{
        temp=first-(data->next);
        return;
    }
}

int main(){
    printf("Masukkan nilai n: %d", first->data);
    push();
}
