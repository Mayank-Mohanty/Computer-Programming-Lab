#include<stdio.h>
int main(){
	int n,m,i,j;
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	printf("Enter the number of resource types: ");
	scanf("%d",&m);
	int Allocation[n][m],Max[n][m],Need[n][m],Available[m],Work[m];
	printf("Enter Allocation Matrix:\n");
	for (i=0;i<n;i++){
                for (j=0;j<m;j++){
			scanf("%d",&Allocation[i][j]);
		}
	}
	printf("\nEnter Max Matrix:\n");
	for (i=0;i<n;i++){
                for (j=0;j<m;j++){
			scanf("%d",&Max[i][j]);
		}
	}
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			Need[i][j]=Max[i][j]-Allocation[i][j];
		}
	}
	printf("\nEnter Available Array: ");
	for (j=0;j<m;j++){
		scanf("%d",&Available[j]);
		Work[j]=Available[j];
	}
	int Finish[n];
	for (i=0;i<n;i++){
		Finish[i]=0;
	}
	int count=0,found,canExecute,safeSequence[n];
	while (count<n){
		found=0;
		for (i=0;i<n;i++){
			if (Finish[i]==0){
				canExecute=1;
				for (j=0;j<m;j++){
					if (Need[i][j]>Work[j]){
						canExecute=0;
						break;
					}
				}
				if (canExecute==1){
					for (j=0;j<m;j++){
						Work[j]+=Allocation[i][j];
					}
					safeSequence[count]=i;
					count++;
					Finish[i]=1;
					found=1;
				}
			}
		}
		if (found==0){
                	printf("\nSystem is in Unsafe State\n");
			return 0;
		}
	}
	printf("\nSystem is in safe state");
	printf("\nSafe Sequence: ");
	for(i=0;i<n;i++){
		printf("%d ",safeSequence[i]);
	}
	printf("\n");
	return 0;
}

