#include<stdio.h>
#include <math.h>
int minfind(int* at, int* bt, int n, int t){
	int k,j;	//k is used as the loop variable for finding the minimum burst time 
	int min=0;	//min is a temporary variable to store the index of minimum burst time
	for (k=0;k<n;k++){
		if (bt[min]>bt[k] && t>=at[k]){
			min=k;	//replacing value of min with the current index 
		}
		}
	return min;
	}

void main(){
	int n,i,t=0,min;	// takes no. of programs, i is used as the loop variable
	printf("Enter the number of programs: ");
	scanf("%d",&n);		// input the total number of programs
	int at[n],bt[n],wt[n];
	printf("Enter the arrival times of processes, seperated by a space: "); 
	for (i=0;i<n;i++){
		scanf("%d",&at[i]); 	//inputting all the arrival times
	}
	printf("Enter the burst times of processes, seperated by a space: "); 
	for (i=0;i<n;i++){
		scanf("%d",&bt[i]); 	//inputting all the burst times
	}
	for (i=0;i<n;i++){
		min=minfind(at,bt,n,t); //finding the program with minimum burst time
		wt[i]=t-at[min];	//calculating the waiting time
		t=t+bt[min];		//incrementing the current time with the burst time
		bt[min]=100;		//assigning a high value to already executed programs
	}
	float awt=0;
	for (i=0;i<n;i++){
		awt=awt+wt[i];		//adding all waiting times
	}
	printf("Average waiting time= %f ",awt/n); //printing the average waiting time
}
