#include <stdio.h>
int main(){int a[]={0,5,3,8,1},n=4,i;for(i=2;i<=n;i++){int j=i;while(j>1&&a[j]<a[j/2]){int t=a[j];a[j]=a[j/2];a[j/2]=t;j/=2;}}for(i=1;i<=n;i++)printf("%d ",a[i]);}