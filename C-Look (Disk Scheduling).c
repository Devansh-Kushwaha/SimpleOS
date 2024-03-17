#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i,hr;			//Initializing loop variables and initial header
	printf("Enter the number of disk requests: ");
	scanf("%d",&n);			//input the number of requests to be scheduled
	int h;
	printf("Enter the location of initial header ");
	scanf("%d",&hr);		//input the location of initial header
	int req[n];
	printf("Enter the array of disk requests: ");
	for (i=0;i<n;i++){
		scanf("%d",&req[i]);	//input the location of all requests
		
	}
	int min=199,min2=199;		//assigning a high initial value to the min variable
	int max=0;			//assigning a low initial value to the max variable
	for (i=0;i<n;i++){
		if (req[i]<min){
			min=req[i];}	//finding the minimum value
		if (req[i]<min2 && req[i]>hr){
			min2=req[i];}
		if (req[i]>max){
			max=req[i];}	//finding the maximum value

	}
	int mo=0;
	mo=mo+abs(hr-min);		//calculating the total number of moves
	mo=mo+abs(max-min2);
	printf(" Total number of movements is: %d",mo);
}
