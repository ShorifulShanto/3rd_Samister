#include <stdio.h>
int main(){int a[10]={1,2,3,4,5},n=5,i;for(i=n;i>2;i--)a[i]=a[i-1];a[3]=99;n++;for(i=2;i<n-1;i++)a[i]=a[i+1];n--;for(i=0;i<n;i++)printf("%d ",a[i]);}