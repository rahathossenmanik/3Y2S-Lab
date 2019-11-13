#include<bits/stdc++.h>
int main(){
    int n, bt[20], wt[20], avwt=0, i, j, rt[20], index[20], tbt=0, temp, itemp, m;
    printf("Enter total number of processes(maximum 20): ");
    scanf("%d",&n);

    printf("Enter Process Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
        tbt=tbt+bt[i];
    }

    printf("\nProcess\t\tBurst Time\tWaiting Time");
    for(i=0;i<tbt;i++)
    {
        for(int j=0;j<n;j++){
            for(int k=i;k<n;j++){
                if(rt[k]<rt[j]){
                    temp=rt[j];
                    rt[j]=rt[k];
                    rt[k]=temp;
                    itemp=index[i];
                    index[i]=index[j];
                    index[j]=itemp;
                }
            }
        }
        m=rt[0];
        printf("\nP[%d]\t\t%d\t\t%d",index[i]+1,rt[i],wt[i]);
        wt[i]=0;
        for(j=0;j<i;j++)wt[i]= wt[i]+bt[j];
        avwt+=wt[i];

    }
    printf("\n\nAverage Waiting Time:%d",avwt/i);

    return 0;
}
