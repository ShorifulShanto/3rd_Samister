#include <stdio.h>
#include <stdlib.h>
struct node{int d;struct node*next;};
int main(){struct node*a=malloc(sizeof(*a)),*b=malloc(sizeof(*b)),*c=malloc(sizeof(*c));a->d=1;b->d=2;c->d=3;a->next=b;b->next=c;c->next=NULL;struct node*x=malloc(sizeof(*x));x->d=0;x->next=a;a=x;struct node*y=a;while(y->next->d!=2)y=y->next;struct node*z=malloc(sizeof(*z));z->d=9;z->next=y->next;y->next=z;struct node*t=a->next;a->next=t->next;free(t);for(t=a;t;t=t->next)printf("%d ",t->d);}