#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k,l,n;
clrscr();
printf("Enter number");
scanf("%d",&n);
//for upper triangle
//for nuber of lines
for(i=1;i<=n;i++){
	//for Blank Space
	for(j=n;j>i;j--){
		printf(" ");

	}
	//for printing numbers
	for(k=i;k>=1;k--){
		printf("%d",k);
	}
	for(l=2;l<=i;l++){
		printf("%d",l);
	}
	printf("\n");
}

//for lower triangle
//for nuber of lines
for(i=n-1;i>=1;i--){
	//for Blank Space
	for(j=n-1;j>=i;j--){
		printf(" ");

	}
	//for printing numbers
	for(k=i;k>=1;k--){
		printf("%d",k);
	}
	for(l=2;l<=i;l++){
		printf("%d",l);
	}
	printf("\n");
}


}