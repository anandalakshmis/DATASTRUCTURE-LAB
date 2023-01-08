#include<stdio.h>
int a[20][20],q[20],visited[20],n,front=-1,rear=-1;
void bfs(int v)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[v][i]!=0 && visited[i]==0)
        {
            rear=rear+1;
            q[rear]=i;
            visited[i]=1;
            printf("%d",i);
        }
    }
    front=front+1;
    if(front<=rear)
    {
        bfs(q[front]);
    }
}
void main()
{
    int v,i,j;
    printf("Enter the number of Vertices:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        visited[i]=0; //intialize all visted as zero
    }
    printf("Enter the node in  matrix form\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the starting vertex:");
    scanf("%d",&v);
    front=rear=0; //inserting value to queue so assigned value for front and rear
    q[rear]=v;
    visited[v]=1;
    printf("%d",v);
    bfs(v);
    if(rear!=n-1)
    {
        printf("BFS is not possible");
    }
}