#include<stdio.h>
#include<stdlib.h>
struct point{
	int sno,at,bt,ct,tat,wt,pri;
};

void main(){
	int n,i,j,index;
		int g[100];
	int c=0;
	int atat=0,awt=0;
	printf("enter no of processes");
	scanf("%d",&n);
	struct point a[n];
	printf("enter sno, at,bt,pri");
	for(i=0;i<n;i++)
	scanf("%d %d %d %d",&a[i].sno,&a[i].at,&a[i].bt,&a[i].pri);
	int min=INT_MAX;
	for(i=0;i<n;i++)
	{if(a[i].at<min)
		{
			min=a[i].at;
			index=i;
			
		}
	}
	
	
		for(j=0;j<n;j++){
		
		if(a[index].at==a[j].at){
		  if(a[index].bt>a[j].bt)
		  index=j;
		
		}
		
		
	}
	
			struct point temp=a[index];
			a[index]=a[0];
			a[0]=temp;

			
	for(i=1;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i].pri>=a[j].pri)
			{ if(a[i].pri>a[j].pri){
			
				struct point t=a[i];
				a[i]=a[j];
				a[j]=t;	}
				else
				{if(a[i].at>=a[j].at)
				{
					if(a[i].at>a[j].at){
			
				struct point t=a[i];
				a[i]=a[j];
				a[j]=t;	}
				else{
					if(a[i].sno>a[j].sno){
						struct point t=a[i];
				a[i]=a[j];
				a[j]=t;
					}
				}
				}
					}	
				
					}
				
		}
	}
	for(i=0;i<n;i++)
	printf("%d %d %d \n",a[i].sno,a[i].at,a[i].bt);
	
	for(i=0;i<n;i++)
	{
		int b=c+a[i].bt;
		a[i].ct=b;
		if(i==0)
		{
			if(a[i].at>0){
				b=a[i].at+a[i].bt;
				a[i].ct=b;
			}
		}
		c=b;
		  a[i].tat=a[i].ct-a[i].at;
			  a[i].wt=a[i].tat-a[i].bt;
			  
		for(;j<b;j++){
			g[j]=a[i].sno;
			
		}
	
	}
	printf("\nsno at bt ct tat wt pri\n");
		for(i=0;i<n;i++){
			printf(" %d  %d  %d  %d  %d  %d %d\n",a[i].sno,a[i].at,a[i].bt,a[i].ct,a[i].tat,a[i].wt,a[i].pri);
			atat+=a[i].tat;
			awt+=a[i].wt;
		}
		atat/=n;
		awt/=n;
		printf("\natat=%d  awt=%d",atat,awt);
	
	
}
