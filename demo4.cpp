#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

int size = 0;

Node* getNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertPosition(Node** current, int position,int data)
{
    if(position<1 || position>size+1)
        cout<<"Invalid position!"<<endl;
    else
    {
        while(position--)
        {
            if(position==0)
            {
                Node* temp = getNode(data);

                temp->next= *current;

                *current = temp;
            }
            else
            {
                current=&(*current)->next;
            }
            size++;
        }
    }
}

void printList(struct Node* head)
{
    while(head != NULL)
    {
        cout<<" "<<head->next;
        head = head->next;
    }
    cout<<endl;
}

int main()
{

}




