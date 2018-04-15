#include<stdio.h>
void main()
{
	int a_t[5],i,j,w_t[5],b_t[5],tat[5],c_t[5],a_t1[5],temp;
	float avg_tt=0;
	printf("\nEnter arrival time for 5 processes");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a_t[i]);
	}
	printf("Enter burst time for 5 processes");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b_t[i]);
	}
	for(i=0;i<5;i++)
	{
		tat[i]=w_t[i]=c_t[i]=0;
	}
	for(i=0;i<5;i++)
	{
		tat[i+1]=tat[i]+b_t[i];
	}
	for(i=0;i<5;i++)
	{
		w_t[i]=tat[i]-a_t[i];
		c_t[i]=tat[i+1]-a_t[i];
		avg_tt=avg_tt+c_t[i];
	}
	printf("\n\n%f",(avg_tt/5));
	
	
	for(i=0;i<5;i++)
	{
	for(j=i+1;j<5;j++)
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
	for(i=0;i<5;i++)
	{
		c_t[i]=c_t[i-1]+b_t[i];
		a_t1[i]=c_t[i-1];
	}
	for(i=0;i<5;i++)
	{
		tat[i]=c_t[i]-a_t1[i];
		avg_tt=avg_tt+tat[i];
	}
	printf("\nturn around time using sjf is %f",(avg_tt/5));
		}

	
	
	

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
