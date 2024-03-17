#include<stdio.h>
void main(){
	int n,i,tm=0,cp,d=1000,j,min,mini;	    // takes no. of programs, i is used as the loop variable
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
        for (j=0;j<n;j++){
                if (d>abs(rq[j]-cp)){
                    d=abs(rq[j]-cp);
                    min=rq[j];
                    mini=j;
                }
	}
        printf("%d ", min);
        tm=tm+abs(min-cp);
        cp=min;
        rq[mini]=1000;
        d=1000;

	}
	printf("Total number of disk movements= %d ",tm); //printing the total disk movements
}
