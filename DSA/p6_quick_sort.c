#include <stdio.h>
int part(int a[],int l,int r){int p=a[r],i=l-1,j,t;for(j=l;j<r;j++){if(a[j]<p){i++;t=a[i];a[i]=a[j];a[j]=t;}}t=a[i+1];a[i+1]=a[r];a[r]=t;return i+1;}
void qs(int a[],int l,int r){if(l<r){int pi=part(a,l,r);qs(a,l,pi-1);qs(a,pi+1,r);}}
int main(){int a[]={5,2,9,1,6};qs(a,0,4);for(int i=0;i<5;i++)printf("%d ",a[i]);}