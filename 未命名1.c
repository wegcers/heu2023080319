#include<stdio.h>
int n,m,k,i,j,t,g;
int x,y,o,p;
int all[104][104]={0};
int main()
{
	scanf("%d %d %d",&n,&m,&k);
	for(i=0;i<m;i++){
		x=0;
		y=0;
		scanf("%d %d",&x,&y);	
		all[x-1][y+1]=1;
		all[x+3][y+1]=1;
		all[x+1][y+3]=1;
		all[x+1][y-1]=1;
		for(j=x;j<x+3;j++){
			for(g=y;g<y+3;g++){
				all[j][g]=1;
			}
		}	
	}
	for(i=0;i<k;i++){
		o=0;
		p=0;
		scanf("%d %d",&o,&p);
		for(j=o-1;j<o+4;j++){
			for(g=p-1;g<p+4;g++){
				all[j][g]=1;
			}
		}
	}
	int con=0;
	for(i=2;i<n+2;i++){
		for(j=2;j<n+2;j++){
			if(all[i][j]==0){
				con++;
			}
	    }
	}    
	printf("%d",con);
	return 0;
}    

