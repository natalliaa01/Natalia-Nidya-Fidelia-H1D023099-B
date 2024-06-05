#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node *address;
typedef struct mahasiswa {
    int NIM;
    char nama[50];
    float IPK;
}mahasiswa;

typedef struct node {
    mahasiswa data;
    address next;
}node;

address first = NULL;
address alokasikan (int NIM, char* nama, float IPK){
    address newnode = (address)malloc(sizeof(node));
    strcpy(newnode->data.nama, nama);
    newnode->data.NIM=NIM;
    newnode->data.IPK=IPK;
    newnode->next=NULL;
    return newnode;
}

void insertfirst (address p){
    p->next=first;
    first=p;
}

void insertlast (address p){
    if (first==NULL){
        first=p;
    }else{
        address temp=first;
        while (temp->next!=NULL){
            temp=temp->next;
        }temp->next=p;
    }
}

void deletefirst(){
    if(first!=NULL){
        address temp=first;
        first=first->next;
        free (temp);
    }
}

void deletelast(){
    if (first==NULL){
        printf("kosong, gabisa dihapus\n");
        return;
    }
    
    if (first->next==NULL){
        free(first);
        first=NULL;
        return;
    }
    
    address current=first;
    address prev=NULL;
    while(current->next!=NULL){
        prev=current;
        current=current->next;
    }
    prev->next=NULL;
    free(current);
}

void cetak(){
    address temp=first;
    while (temp!=NULL){
        printf("NIM:%d, nama:%s, IPK:%.2f\n", temp->data.NIM, temp->data.nama, temp->data.IPK);
        temp=temp->next;
    }
}

void insertascending(address p){
    if (first==NULL){
        first=p;
    }else(first->next>p) {
        printf("NIM: "<<p<<first->next, "nama: %s", "IPK:%.2f\n");
    }
}

void swapdata(address node1, address node 2){
    first->next=current;
    first=current->prev;
}

void sortlist(){
    if (first=NULL){
        printf("kosong");
    }else{
        printf("NIM: %d"<<p, "nama: %s", "IPK:%.2f\n");
    }
}

void cetakBerdasarkanNIM(){
    sortList();
    address temp=first;
    while (temp!=NULL){
        printf("NIM:%d, nama:%s, IPK:%.2f\n", temp->data.NIM, temp->data.NIM->next, temp->data.nama, temp->data.IPK);
        return 0;
}

}