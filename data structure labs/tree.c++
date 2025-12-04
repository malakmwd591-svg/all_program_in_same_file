#include<iostream>
using namespace std;
class Node
{
public :
    int data;
    Node* left,*right;

Node(int value){
    data=value;
    left=right=NULL;

}
  

};
class BST
{
public:
    Node*root;
BST()
   {
    root=NULL;
   }
Node*Insert(Node* r,int item){
if(r==NULL)
    {
    Node*newnode=new Node(item);
    r=newnode;
    }

else if(item <=r->data)
    r->left=Insert(r->left,item);
else
    r->right=Insert(r->right,item);
return r;
}
void Insert(int item ){
    root=Insert(root,item);
}
void preorder(Node* r){
    if(r==NULL)
    return;
    cout<<r->data<<"\t";
    preorder(r->left);
    preorder(r->right);
    
}
void inorder(Node* r){
    if(r==NULL)
    return;
    inorder(r->left);
    cout<<r->data<<"\t";
    inorder(r->right);
}
void postorder(Node* r){
    if(r==NULL)
    return;
    postorder(r->left);
    postorder(r->right);
    cout<<r->data<<"\t";


}

    

};