#include<stdio.h>
void main(){
	int n,i,tm=0,cp,j,min=1000,max=0,c,to;	    // takes no. of programs, i is used as the loop variable
	printf("Enter the number of requests: ");
	scanf("%d",&n);		        // input the total number of requests
	int rq[n];
	printf("Enter the track no.s of requests, seperated by a space: ");
	for (i=0;i<n;i++){
		scanf("%d",&rq[i]); 	//inputting all the request tracks
	}
	printf("Enter the current position of R/W head: ");
	scanf("%d",&cp);		    // input the initial position of R/W head
    printf("Enter the total number of tracks:");
	scanf("%d",&to);		    // input the total number of tracks
	printf("Choose: \n 1)Towards larger value first \n 2)Towards smaller value first \n ");
	scanf("%d",&c);

	switch (c){
    case 1:
        for (i=0;i<n;i++){
            if (min>rq[i]){
                min=rq[i];
            }}
        tm=tm+to-cp;
        tm=tm+to-min;
        break;
    case 2:
        for (i=0;i<n;i++){
            if (max<rq[i]){
                max=rq[i];
            }}
        tm=tm+cp;
        tm=tm+max;
	}
	printf("Total number of disk movements= %d ",tm); //printing the total disk movements
}
