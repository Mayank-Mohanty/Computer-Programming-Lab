#include <stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1
#define MAX 20
int adj[MAX][MAX],color[MAX],d[MAX],f[MAX],pi[MAX],n,time;
void DFS_VISIT(int u){
  time=time+1;
  d[u]=time;
  color[u]=GRAY;
  for(int v=0;v<n;v++){
    if(adj[u][v]==1){
      if(color[v]==WHITE){
        pi[v]=u;
        DFS_VISIT(v);
      }
    }
  }
  color[u]=BLACK;
  time=time+1;
  f[u]=time;
  printf("Vertex:%d Discovery:%d Finish:%d Parent:%d\n",u,d[u],f[u],pi[u]);
}
void DFS(){
  for(int u=0;u<n;u++){
    color[u]=WHITE;
    pi[u]=NIL;
  }
  time=0;
  for(int u=0;u<n;u++){
    if(color[u]==WHITE){
      DFS_VISIT(u);
    }
  }
}
int main(){
  printf("Enter number of vertices: ");
  scanf("%d",&n);
  printf("Enter adjacency matrix:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&adj[i][j]);
    }
  }  
  DFS();
  return 0;
}
