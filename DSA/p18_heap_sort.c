#include <stdio.h>
void heapify(int a[],int n,int i){int l=2*i,r=2*i+1,lg=i,tmp;if(l<=n&&a[l]>a[lg])lg=l;if(r<=n&&a[r]>a[lg])lg=r;if(lg!=i){tmp=a[i];a[i]=a[lg];a[lg]=tmp;heapify(a,n,lg);}}
int main(){int a[]={0,5,2,8,1,6};int n=5,i,tmp;for(i=n/2;i>=1;i--)heapify(a,n,i);for(i=n;i>=1;i--){tmp=a[1];a[1]=a[i];a[i]=tmp;heapify(a,i-1,1);}for(i=1;i<=5;i++)printf("%d ",a[i]);}