#include <stdio.h>
int g[10][10]={0},visited[10]={0},n;
void dfs(int v)
{
    printf("%d ",v);
    int i;
    visited[v]=1;
    for(i=1;i<=n;i++)
    {
        if(g[v][i]==1 && visited[i]==0)
        {
            
            dfs(i);
        }
    }
}
void main()
{
    int i,j;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("Enter the adjacency matrix:");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&g[i][j]);
        }
    }
    dfs(1);
}
