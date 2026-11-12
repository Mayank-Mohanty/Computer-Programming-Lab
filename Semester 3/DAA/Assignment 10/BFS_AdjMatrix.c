#include <stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1
#define MAX 20
int adj[MAX][MAX],color[MAX],d[MAX],pi[MAX],n;
int Q[MAX],front=0,rear=-1;
void ENQUEUE(int x){
    Q[++rear]=x;
}
int DEQUEUE(){
    return Q[front++];
}
int isEmpty(){
    return front>rear;
}
void BFS(int s){
  for(int u=0;u<n;u++){
    if(u!=s){
      color[u]=WHITE;
      d[u]=99999;
      pi[u]=NIL;
    }
  }
  color[s]=GRAY;
  d[s]=0;
  pi[s]=NIL;
  front=0;
  rear=-1;
  ENQUEUE(s);
  while(!isEmpty()){
    int u=DEQUEUE();
    printf("Vertex:%d Distance:%d Parent:%d\n",u,d[u],pi[u]);
    for(int v=0;v<n;v++){
      if(adj[u][v]==1){
        if(color[v]==WHITE){
          color[v]=GRAY;
          d[v]=d[u]+1;
          pi[v]=u;
          ENQUEUE(v);
        }
      }
    }
    color[u]=BLACK;
  }
}
int main(){
  int s;
  printf("Enter number of vertices: ");
  scanf("%d",&n);
  printf("Enter adjacency matrix:\n");
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&adj[i][j]);
    }
  }
  printf("Enter source vertex: ");
  scanf("%d",&s);
  BFS(s);
  return 0;
}
