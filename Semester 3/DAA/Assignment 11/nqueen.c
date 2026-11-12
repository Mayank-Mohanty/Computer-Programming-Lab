#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 20
int count=0;
void PLACE_QUEENS(int Q[],int r,int n){
  if(r==n+1){
    count++;
    printf("Solution %d:\n",count);
    for(int i=1;i<=n;i++){
      for(int k=1;k<=n;k++){
        if(Q[i]==k)
          printf("Q ");
        else
          printf(". ");
      }
      printf("\n");
    }
    printf("\n");
  }
  else{
    for(int j=1;j<=n;j++){
      int legal=TRUE;
      for(int i=1;i<=r-1;i++){
        if(Q[i]==j||Q[i]==j+r-i||Q[i]==j-r+i){
          legal=FALSE;
        }
      }
      if(legal==TRUE){
        Q[r]=j;
        PLACE_QUEENS(Q,r+1,n);
      }
    }
  }
}
int main(){
  int Q[MAX],n;
  printf("Enter number of queens: ");
  scanf("%d",&n);
  printf("\n");
  PLACE_QUEENS(Q,1,n);
  if(count==0)
    printf("No solution exists\n");
  return 0;
}
