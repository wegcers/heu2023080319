#include<stdio.h>
int i,j,num,n,m,tot;
int att[300]; 
int con[300][300]={0};
int vil[300]={0};
void judge(int hst){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(con[i][j]==1&&att[i]>att[j]){
				vil[j]=1;
			}
		}
	}
	return;
}
int main()
{
	int hst=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&att[i]);
		if(hst<att[i]){
			hst=att[i];
			num=i+1;
		}		
	}
	for(i=0;i<m;i++){
		int a=0;
		int b=0;
		scanf("%d %d",&a,&b);
		con[a-1][b-1]=1;
		con[b-1][a-1]=1;
	}
	if(m<n-1){
		printf("Non");
		return 0;
	}
	int top=0;
	for(i=0;i<n;i++){
		if(att[i]==hst){
			top++;
			tot=i;
		}	
	}
	if(top>1){
		printf("Non");
		return 0;
	}	
	vil[tot]=1;
	judge(hst);
	for(i=0;i<n;i++){
		if(vil[i]==0){
			printf("Non");
			return 0;
		} 
	} 
	printf("Oui, j'ai trouve la solution.\n%d",num);	
    return 0;
}    
