#include<bits/stdc++.h>
using namespace std;
// vector<int>v;
class node{
    public:
        int data;
        node* left;
        node* right;
        node(int value){
            data = value;
            left = NULL;
            right = NULL;
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
void push(vector<int>&v , node* root , int count){
    if(root->left==NULL&&root->right==NULL){
        v.push_back(count);
        return;
    }
    else if(root->left==NULL){
        push(v , root->right , count+1);
    }
    else if(root->right==NULL){
        push(v , root->left , count+1);
    }
    else {
        push(v , root->right , count+1);
        push(v , root->left , count+1);
    }
}
int main(){
    node* a=new node(2);
    node* root = a;
    node* b=new node(3);
    node* c=new node(4);
    node* d=new node(5);
    node* e=new node(6);
    node* f=new node(7);
    node* g= new node(8);
    node* h=new node(9);
    node* i=new node(10);

    node* j=new node(11);
    node* k=new node(12);
    node* l=new node(13);
    node* m=new node(14);
    node* n=new node(15);
    node* o=new node(16);
    node* p= new node(17);
    node* q=new node(18);
    node* r=new node(19);
    node* s=new node(20);
    node* t=new node(21);
    node* u=new node(22);
    node* v=new node(23);
    node* w=new node(24);
    node* x=new node(25);
    node* y=new node(26);
    node* z=new node(27);
    
    a->left=d;
    a->right=e;
    d->left=j;
    d->right=m;
    e->left=c;
    e->right=f;
    c->right=p;
    f->left=n;

    // print(root);

    vector<int>v1;
    push(v1 , root , 1);
    int t1=v1.size();
    int z1=v1[0];
    for(int i=1;i<t1;i++){
        if(v1[i]>z1){
            z1=v1[i];
        }
    }
    cout<<z1<<endl;
}