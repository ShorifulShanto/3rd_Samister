#include <stdio.h>
int main(){int a[]={5,3,8,2,9};int n=5,key=8,i;for(i=0;i<n;i++){if(a[i]==key){printf("found");return 0;}}printf("not found");}