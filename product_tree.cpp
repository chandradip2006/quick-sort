#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, x, n) for(int i = x; i < (int)(n);i++)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define vvii vector<vii>
#define ld long double
#define pb push_back
#define eb emplace_back
#define pf push_front
#define ef emplace_front
#define pof pop_front
#define pob pop_back
#define fir first
#define sec second

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
int pdt(node* root){
    if(root == NULL){
        return 1;
    }
    return pdt(root->left) * pdt(root->right)*root->data;
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

    cout<<pdt(root)<<endl;
}