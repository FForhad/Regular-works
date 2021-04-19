#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct node
{
    ll data;
    struct node *next;
}*head;

void createlist(ll n)
{
    struct node *newNode,*temp;
    ll a,i;
    head=(struct node*)malloc(sizeof(struct node));

    cin>>a;
    head->data=a;
    head->next=NULL;
    temp=head;
    for(i=1;i<n;i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        cin>>a;
        newNode->data=a;
        newNode->next=NULL;
        temp->next=newNode;
        temp=temp->next;

    }
}

int print()
{
    int e=0;
    struct node *temp=head;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;e++;
    }
    cout<<endl;
}

void insrtfirstpos()
{
    ll a;
    struct node *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    newNode->data=a;
    newNode->next=head;
    head=newNode;

}

void dltfirstpos()
{
    head=head->next;
}
void ltdltpos()
{
    struct node *lthead, *lthead2;

    lthead=head;
    lthead2=head;

    while(lthead->next!=NULL)
    {
        lthead2=lthead;
        lthead=lthead->next;
    }
    if(lthead == head)
    {
        head=NULL;
    }
    else
    {
        lthead2->next=NULL;
    }
}

void deleteNode(int n) {

    struct node* temp1 = head;
    if(n==1)
    {
        head =temp1->next;
        free(temp1);return;
    }

    int i;
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->next;
    }
    struct node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);


}

int main()
{
    ll n,a;
    cin>>n;
    createlist(n);
    print();
    dltfirstpos();
    print();
    ltdltpos();
    print();
    cin>>a;
    deleteNode(a);
    print();



return 0;
}
