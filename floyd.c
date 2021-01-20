#include<stdio.h>
int w[20][20];
void floydwarshell(int v){
	int dist[20][20],i,j,k;
	for(i=0;i<v;i++){
		for(j=0;j<v;j++)
		dist[i][j]=w[i][j];
	}
	for(k=0;k<v;k++){
		for(i=0;i<v;i++){
			for( j=0;j<v;j++){
				if(dist[i][k]+dist[k][j]<dist[i][j])
				dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
	printf("\n\n");
	for( i=0;i<v;i++){
		for( j=0;j<v;j++)
		printf("%d   ",dist[i][j]);
		printf("\n");
}
}
int main(){
	int v,i,j;
	printf("Enter the number of vertices:");
	scanf("%d",&v);
	printf("For infinity input 99999:\n");
	printf("Enter the elements row wise:\n");
	for(i=0;i<v;i++){
		for(j=0;j<v;j++)
		scanf("%d",&w[i][j]);
}
floydwarshell(v);
return 0;
}
