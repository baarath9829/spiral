#include<stdio.h>
int main(){
	int x,size;
	int a[10][10],r=0,c=0,minr=1,minc=0,maxr,maxc,i,j;
	printf("enter the size\n");
	scanf("%d",&size);
	maxr=size;
	maxc=size;
	x=size*size;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			a[i][j]=0;
		}
	}
	while(1){
		if((minc>maxc)&&(minr>maxr))
			break;
		while(1){
		if(c<maxc){
			a[r][c]=x;
			x--;
			c++;
		}
		else{
			c=maxc-1;
			maxc--;
			r++;
			break;
		}
		}
		while(1){
		if(r<maxr){
			a[r][c]=x;
			x--;
			r++;
		}
		else{
			r=maxr-1;
			maxr--;
			c--;
			break;
		}
		}
		while(1){
		if(c>=minc){
			a[r][c]=x;
			x--;
			c--;
		}
		else{
			c=minc;
			minc++;
			r--;
			break;
		}
		}
		while(1){
		if(r>=minr){
			a[r][c]=x;
			x--;
			r--;
		}
		else{
			r=minr;
			minr++;
			c++;
			break;
		}
		}
	//	for(i=0;i<size;i++){
	//		for(j=0;j<size;j++){
	//			printf("%d\t\t",a[i][j]);
	//		}
	//		printf("\n");
	//	}
	//	printf("\n\n");
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

		

