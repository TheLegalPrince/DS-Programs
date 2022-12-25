#include<stdio.h>
#include<stdlib.h>
#define max 10
int main()
{  
int queue[max];
int front=-1;
int rear=-1;
int data;
int i;
printf("Enter the data: ");
scanf("%d",&data);
    if((rear+1)%max==front)
    {  
        printf("OVERFLOW..");
		exit(0); 
    }
	else if(front==-1 && rear==-1)
    {  
        front=0;  
        rear=0;  
        queue[rear]=data;  
    }    
    else  
    {  
        rear=(rear+1)%max;
        queue[rear]=data;
    }
printf("The queue is: ");
if(front==-1)
{
	printf("Underflow");
}
else if(rear>=front)
{
	for(i=front;i<=rear;i++)
	printf("%d",queue[i]);
}
else
{
	for(i=front;i<=max-1;i++)
	printf("%d",queue[i]);
	for(i=0;i<=rear;i++)
	printf("%d",queue[i]);
}
}
