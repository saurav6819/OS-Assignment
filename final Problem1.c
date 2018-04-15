#include<stdio.h>
void main()
{
	int a_t[3],i,j,n,w_t[3],b_t[3],tat[3],c_t[3],a_t1[3],temp;
	float avg_tt=0;
	printf("\nEnter arrival time for 3 processes");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a_t[i]);
	}
	printf("Enter burst time for 3 processes");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b_t[i]);
	}
	printf("\nenter 1 for fcfs scheduling\n");
	printf("enter 2 for sjf scheduling\n");
	printf("enter 3 for sjf scheduling with 1 unit added arrival       
	time in process 1 and 2\n");
	scanf("%d",&n);	
	switch(n):
	case1:	
	for(i=0;i<3;i++)
	{
		tat[i]=w_t[i]=c_t[i]=0;
	}
	for(i=0;i<3;i++)
	{
		tat[i+1]=tat[i]+b_t[i];
	}
	for(i=0;i<3;i++)
	{
		w_t[i]=tat[i]-a_t[i];
		c_t[i]=tat[i+1]-a_t[i];
		avg_tt=avg_tt+c_t[i];
	}
	printf("\n\n%f",(avg_tt/3));
	break;
	case 2:
	printf("\n\nSJF scheduing\n\n");
	for(i=0;i<3;i++)
	{
	for(j=i+1;j<3;j++)
	{
	if(b_t[i]>b_t[j])
	{
		temp=b_t[j];
		b_t[j]=b_t[i];
		b_t[i]=temp; 	
	}	
	}
	}
	printf("\nnew burst time");
	for(i=0;i<3;i++)
	{
		printf("\n%d",b_t[i]);
	}
	a_t1[0]=a_t[0];
	c_t[0]=a_t1[0]+b_t[0];
	for(i=0;i<3;i++)
	{
		c_t[i]=c_t[i-1]+b_t[i];
		a_t1[i]=c_t[i-1];
	}
	for(i=0;i<3;i++)
	{
		tat[i]=c_t[i]-a_t1[i];
		avg_tt=avg_tt+tat[i];
	}
	printf("\nturn around time using sjf is %f",(avg_tt/3));
		break;
	case 3:
	printf("\n\ncase 3\n\n");
	a_t[0]+=1;
	a_t[1]+=1;
	for(i=0;i<3;i++)
	{
	for(j=i+1;j<3;j++)
	{
	if(b_t[i]>b_t[j])
	{
		temp=b_t[j];
		b_t[j]=b_t[i];
		b_t[i]=temp; 	
	}	
	}
	}
	printf("\nnew burst time");
	for(i=0;i<3;i++)
	{
		printf("\n%d",b_t[i]);
	}
	a_t1[0]=a_t[0];
	c_t[0]=a_t1[0]+b_t[0];
	for(i=0;i<3;i++)
	{
		c_t[i]=c_t[i-1]+b_t[i];
		a_t1[i]=c_t[i-1];
	}
	for(i=0;i<3;i++)
	{
		tat[i]=c_t[i]-a_t1[i];
		avg_tt=avg_tt+tat[i];
	}
	printf("\nturn around time using sjf when processes 1& 2\n are incremented by 1  is %f",(avg_tt/3));
		break;
}
}

	

	
	
	

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
