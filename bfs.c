#include <stdio.h>

int a[20][20]q[20]
int visited[10],n,i,j,f=-1,r=-1;
void bfs(int v)
{
        for(i=1; i<=n; i++)
        if(a[v][i] && ! visited[i])
        q[++r]=i;
        if(f<=r)
        {
            visited[q[f]]=1;
            bfs(r[f++]);
        
        }
}
void main()
{
    int v;
    printf("\n ENTER THE NUMBER OF VERTICES:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        q[i]=0;
        visited[i]=0;
        
    }
    printf("\n ENTER GRAPH DATA IN MATRIX FORM: \n");
    for(i=1; i<=n; i++)
    for(j=1; j<=n; j++)
    scanf("%d",&a[i][j]);
    printf("\n the node which are reachble :\n");
    scanf("%d",&v);
    bfs(v);
    for(i=1;i<=n;i++)
    if(visited[i])
    printf("%d\t",i);
    else
    printf("\n BFS is not possible");
}
