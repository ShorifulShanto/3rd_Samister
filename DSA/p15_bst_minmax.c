#include <stdio.h>
#include <stdlib.h>
struct node{int d;struct node*l,*r;};
struct node*new(int x){struct node*t=malloc(sizeof(*t));t->d=x;t->l=t->r=NULL;return t;}
int main(){struct node*root=new(5);root->l=new(3);root->r=new(8);root->l->l=new(1);root->r->r=new(10);struct node*t=root;while(t->l)t=t->l;printf("%d ",t->d);t=root;while(t->r)t=t->r;printf("%d",t->d);}