#include <stdio.h>
void merge(int a[],int l,int m,int r){int n1=m-l+1,n2=r-m,L[50],R[50],i,j,k;for(i=0;i<n1;i++)L[i]=a[l+i];for(j=0;j<n2;j++)R[j]=a[m+1+j];i=j=0;k=l;while(i<n1&&j<n2){a[k++]=L[i]<=R[j]?L[i++]:R[j++];}while(i<n1)a[k++]=L[i++];while(j<n2)a[k++]=R[j++];}
void ms(int a[],int l,int r){if(l<r){int m=(l+r)/2;ms(a,l,m);ms(a,m+1,r);merge(a,l,m,r);}}
int main(){int a[]={5,2,9,1,6};ms(a,0,4);for(int i=0;i<5;i++)printf("%d ",a[i]);}