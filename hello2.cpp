#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *LChild;
    struct node *RChild;

};

struct node *root;

void insrt(int data)
{
    struct node *tnode = new node;
    struct node *current;
    struct node *parent;

    tnode->data = data;
    tnode->LChild = NULL;
    tnode->RChild = NULL;

    if(root==NULL)
    {
        root = tnode;
    }
    else
    {
        current = root;
        parent = NULL;

        while(1)
        {
            parent = current;

            if(data < parent->data)
            {
                current=current->LChild;

                if(current == NULL)
                {
                    parent->LChild = tnode;
                    return;
                }
            }
            else
            {
                current = current->RChild;

                if(current == NULL)
                {
                    parent->RChild = tnode;
                    return;
                }
            }
        }
    }
}

void printInorder(struct node* tnode)
{
    if(tnode==NULL)
        return;
    printInorder(tnode->LChild);
    cout<<tnode->data<<" ";
    printInorder(tnode->RChild);
}

void printpreorder(struct node* tnode)
{
    if(tnode==NULL)
        return;
    cout<<tnode->data<<" ";
    printpreorder(tnode->LChild);
    printpreorder(tnode->RChild);
}

void printpostorder(struct node* tnode)
{
    if(tnode==NULL)
        return;
    printInorder(tnode->LChild);
    printInorder(tnode->RChild);
    cout<<tnode->data<<" ";
}

int main()
{
    int n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a;
        insrt(a);
    }

    cout<<"Inorder: ";
    printInorder(root);cout<<endl;
    cout<<"Preorder: ";
    printpreorder(root);cout<<endl;
    cout<<"Postorder: ";
    printpostorder(root);cout<<endl;

}
