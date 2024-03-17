#include<stdio.h>
#include<conio.h>
void main(){
    int fn,n,i;
    printf("Enter the number of available frames: ");
    scanf ("%d",&fn);
    int f[fn];
    for (i=0;i<fn;i++){
    f[i]=-1;
    }
    int findex[fn];
    for (i=0;i<fn;i++){
    findex[i]=-1;
    }
    printf("Enter the number of page requests: ");
    scanf ("%d",&n);
    int p[n];
    printf("Enter all the page requests as an array: ");
    for (i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    int j;
    int hit=0;
    int minin=100;
    int actualin;
    int hc;
    for (i=0;i<n;i++){
        hc=0;
        for (j=0;j<fn;j++){
                if (f[j]==p[i]){
                        printf("%d %d", f[j],p[i]);
                    hit++;
                    hc=1;
                    break;
                }}
        if (hc==0){
                minin=100;
                actualin=0;
                for (j=0;j<fn;j++){
                   if (minin>findex[j]){
                        minin=findex[j];
                        actualin=j;
                   }
                }
                f[actualin]=p[i];
                findex[actualin]=i;
    }

}


printf("No. of hits: %d\n", hit);
printf("No. of faults: %d", n-hit);
}
