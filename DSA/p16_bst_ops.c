#include <stdio.h>
#include <stdlib.h>
struct node{int d;struct node*l,*r;};
struct node*ins(struct node*r,int x){if(!r){r=malloc(sizeof(*r));r->d=x;r->l=r->r=NULL;return r;}if(x<r->d)r->l=ins(r->l,x);else r->r=ins(r->r,x);return r;}
int sea(struct node*r,int x){if(!r)return 0;if(r->d==x)return 1;return x<r->d?sea(r->l,x):sea(r->r,x);}
struct node*del(struct node*r,int x){if(!r)return r;if(x<r->d)r->l=del(r->l,x);else if(x>r->d)r->r=del(r->r,x);else{if(!r->l){struct node*t=r->r;free(r);return t;}else if(!r->r){struct node*t=r->l;free(r);return t;}struct node*t=r->r;while(t->l)t=t->l;r->d=t->d;r->r=del(r->r,t->d);}return r;}
int main(){struct node*r=NULL;r=ins(r,5);ins(r,3);ins(r,7);printf("%d ",sea(r,7));r=del(r,3);printf("%d",sea(r,3));}