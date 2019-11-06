#include<bits/stdc++.h>
int main(){
    int n, bt[20], wt[20], avwt=0, i, j, index[20], itemp, temp;
    printf("Enter total number of processes(maximum 20): ");
    scanf("%d",&n);

    printf("Enter Process Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
        index[i]=i;
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(bt[j]<bt[i]){
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                itemp=index[i];
                index[i]=index[j];
                index[j]=itemp;
            }
        }
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)wt[i]= wt[i]+bt[j];
        avwt+=wt[i];
        printf("\nP[%d]\t\t%d\t\t%d",index[i]+1,bt[i],wt[i]);

    }
    printf("\n\nAverage Waiting Time:%d",avwt/i);

    return 0;
}
