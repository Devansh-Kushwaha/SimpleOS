#include<stdio.h>
void main(){
	int n,i,nb,c=0,sb,sbi;
	printf("Enter the number of memory blocks available: ");
	scanf("%d",&n);
	int ab[n];
	printf("Enter the memory of each memory block available as an array (seperated by spaces): ");
	for (i=0;i<n;i++){
		scanf("%d",&ab[i]);
		
	}
	printf("Enter the memory required by the new process: ");
	scanf("%d",&nb);
	int d=100000;
	for (i=0;i<n;i++){
		if (d>ab[i]-nb && ab[i]-nb>0){
			d=ab[i]-nb;
			sb=ab[i];
			sbi=i+1;
			c=1;
		}}
	
	
	if (c==0){
		printf("No memory block has enough storage space to suffice the given process");}
	if(c==1){
		printf(" The new process will be allocated the %d memory space i.e. the available memory block number %d.", sb,sbi);
		}
	
}
