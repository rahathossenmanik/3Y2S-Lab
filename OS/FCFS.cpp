#include<bits/stdc++.h>
int main(){
    int n, bt[20], wt[20], avwt=0, i, j;
    printf("Enter total number of processes(maximum 20): ");
    scanf("%d",&n);

    printf("Enter Process Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)wt[i]= wt[i]+bt[j];
        avwt+=wt[i];
        printf("\nP[%d]\t\t%d\t\t%d",i+1,bt[i],wt[i]);

    }
    printf("\n\nAverage Waiting Time:%d",avwt/i);

    return 0;
}
