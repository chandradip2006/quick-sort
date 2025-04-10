#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        
            int data;
            node* left;
            node* right;

        node(int x){
            data=x;
            left=NULL;
            right=NULL;
        }
};

void print(node* root){
    if(root->left==NULL&&root->right==NULL){
        cout<<root->data<<"->\n";
        return;
    }
    else if(root->left==NULL){
        cout<<root->data<<"-> ,"<<root->right->data<<"\n";
        print(root->right);
    }
    else if(root->right==NULL){
        cout<<root->data<<"->"<<root->left->data<<",\n";
        print(root->left);
    }
    else {
        cout<<root->data<<"->"<<root->left->data<<","<<root->right->data<<"\n";
        print(root->left);
        print(root->right);
    }
}
int main(){
    node* a=new node(2);
    node* root = a;
    // a->data=2;
    node* b=new node(3);
    // b->data=3;
    node* c=new node(4);
    // c->data=4;

    a->left=b;
    a->right=c;
    b->right=new node(5);
    c->left=new node(6);
    c->right=new node(7);
    // cout<<a->data<<endl;
    print(root);



}