#include<stdio.h>
#include<stdlib.h>
struct point{
	int sno,at,bt,pri,ct,wt,tat;
	
};

int main(){
	struct point p;
	int n;
	int min=INT_MAX,index;
	printf("enter no of processors");
	scanf("%d",&n);
	printf("enter sno,at,bt,pri ");
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d ",&sno,&at,&bt,&pri);
	}
	for(int i=0;i<n;i++){
		if(a[i]<min){
		index=i;
		min=a[i]}
	}
	struct temp=a[index];
	a[index]=a[0];
	a[0]=temp;
	
	for(int i=0;i<n;i++){
		
	}
	
	
	
}
