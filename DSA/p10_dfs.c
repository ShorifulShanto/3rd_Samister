#include <stdio.h>
int g[4][4]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{0,1,1,0}},vis[4]={0};
void dfs(int u){vis[u]=1;printf("%d ",u);for(int v=0;v<4;v++)if(g[u][v]&&!vis[v])dfs(v);}
int main(){dfs(0);}