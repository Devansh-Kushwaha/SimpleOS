#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i,tm=0,cp;	        // takes no. of programs, i is used as the loop variable
	printf("Enter the number of requests: ");
	scanf("%d",&n);		        // input the total number of requests
	int rq[n];
	printf("Enter the track no.s of requests, seperated by a space: ");
	for (i=0;i<n;i++){
		scanf("%d",&rq[i]); 	//inputting all the request tracks
	}
	printf("Enter the current position of R/W head: ");
	scanf("%d",&cp);		    // input the initial position of R/W head
	for (i=0;i<n;i++){
		tm=tm+abs(rq[i]-cp);    //adding the no. of tracks covered for each new request
		cp=rq[i];               //updating the current position of R/W head
	}
	printf("Total number of disk movements= %d ",tm); //printing the total disk movements
}
