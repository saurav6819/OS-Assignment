#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int f[20],p=0;
int NummBowls,NumCats=0,NumMouse=0;
pthread_mutex_t mutex,cm,mm;
void * c()
{
	pthread_mutex_lock(&mutex);
	NumCats=NumCats+1;
	int i=NumCats;
	int j=NumBowls;
	pthread_mutex_unlock(&mutex);
	printf("cats starts to eat");
	sleep(2);
	printf("cat%d woke up and again started to eat",i);
	while(NumMouse>0)
	{
	ss[NumMouse]=-1;
	NumMouse-=1;
	}	
}

void * m()
{	pthread_mutex_lock(&mm);
	NumBowls=Numbowls-1;
	ss[NumMouse]=NumMouse;
	int g=NumMouse;
	sleep(1)
	pthread_mutex_unlock(&mm);
	printf("mouse started to eat ");
	if(g!=ss[g])
	{
	printf("cat woke up and eats the mice");
	}
	
	
}

int main()
{
	pthread_t th1,th2;
	int x;
	int p=5
	printf("press 1 when only cat is eating\n");
	printf("press 2 when mouse is eating\n");
	printf("press 3 cat sees mouse eating and eats the mouse\n");
	printf("press 4 mouse starts eating after car eats\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
			pthread_create(&t1,NULL,cat,NULL);
			pthread_join(t1,NULL);
			break;
		case 2:
			pthread_create(&t1,NULL,mouse,NULL);
			pthread_join(t1,NULL);
			break;
		case 3:
			pthread_create(&t1,NULL,cat,NULL);
			pthread_create(&t2,NULL,mouse,NULL);
			pthread_join(t1,NULL);
			pthread_join(t2,NULL);
			break;
		case 4:
			pthread_create(&t1,NULL,cat,NULL);
			sleep(8);
			pthread_create(&t2,NULL,mouse,NULL);
			pthread_join(t1,NULL);
			pthread_join(t2,NULL);
			break;
	
}
}
