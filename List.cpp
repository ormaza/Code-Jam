#include <iostream>

using namespace std;

struct Node
  {
     int data;
     struct Node *next;
  };

void print(Node* lista)
{
    cout<<lista->data<<endl;
    if(lista->next!=NULL)
    {
        print(lista->next);
    }
}

void add(Node* lista,int valor)
{
    if(lista->next!=NULL) add(lista->next,valor);
    else{
    Node* ele;
    ele->data=valor;
    ele->next=NULL;
    lista->next=ele;}
}

void busca(Node* lista,int valor)
{
    if(lista->data!=valor && lista->next!=NULL) busca(lista->next,valor);
    else if(lista->data==valor) {cout<<"Item encontrado!"<<endl;}
    else {cout<<"Item nao encontrado!"<<endl;}

}

void exclui(Node* lista,int valor)
{
    //DEPOIS EU FAÇO ESTUDAR PCD!!
}

int main()
{
    //preenchimento da lista
    Node* lista = new Node;
    Node* no2 = new Node;
    Node* no3 = new Node;

    lista->data=1;
    lista->next=no2;
    no2->data=2;
    no2->next=no3;
    no3->data=3;
    no3->next=NULL;

    print(lista);//imprime os nós
    add(lista,3);//adiciona um nó
    print(lista);//imprime novamente
    busca(lista,2); //busca na lista
    return 0;
}
