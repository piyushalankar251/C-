#include<stdio.h>
#include <math.h>
int main()
{

int n,i,j;
printf("Enter the number of process:\n");
scanf("%d",&n);
float ct[n];float wt[n];float bt[n];float at[n];float tt[n];float rt[n];
float wtt=0.0,rtt=0.0,tat=0.0,avgtat=0.0,avgwtt=0.0,avgrtt=0.0;
int p[n],pr[n];
for(i=0;i<n;i++)
{
	printf("Enter the pid,arrival time and burst time and priority  for process %d\n",i);
	scanf("%d",&p[i]);
	scanf("%f",&at[i]);
    scanf("%f",&bt[i]);
    scanf("%d",&pr[i]);
		
    	
}
	int t,t1;
			float temp,temp1;
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(pr[j]>pr[j+1])
		
		{
	         t1=pr[j];
	         pr[j]=pr[j+1];
	         pr[j+1]=t1;
	          temp=at[j];
	         at[j]=at[j+1];
           	at[j+1]=temp;
		
	
		temp1=bt[j];
		bt[j]=bt[j+1];
		bt[j+1]=temp1;
		t=p[j];
		p[j]=p[j+1];
		p[j+1]=t;		
	}
	}
}


for(i=0;i<n;i++)
{
	j=i;
	if(i==0)
	{
		ct[i]=bt[i];
		tt[i]=ct[i]-at[i];
		wt[i]=tt[i]-bt[i];
		rt[i]=wt[i];
	}
	else
	{
		ct[i]=ct[i-1]-at[i]+bt[i];
		tt[i]=ct[i]-at[i];
		wt[i]=tt[i]-bt[i];
		rt[i]=wt[i];
	}
	
	}
	
	printf("Process\t\tArrival_Time\tBurst_Time\t\tPriority\t\tCT\tTAT\tWT\tRT\n");
for(i=0;i<n;i++)
{
	
	
	printf("%d\t\t%.2f\t\t%.2f\t\t\t%d\t\t\t%.2f\t%.2f\t%.2f\t%.2f\n",p[i],at[i],bt[i],pr[i],ct[i],tt[i],wt[i],rt[i]);
}
return 0;
}