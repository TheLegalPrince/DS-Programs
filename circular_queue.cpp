#include <stdio.h>  
# define max 2  
int queue[max];
int front=-1;  
int rear=-1; 
void enqueue(int element)  
{  
    if(front==-1 && rear==-1)
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%max==front)
    {  
        printf("OVERFLOW..");  
    }  
    else  
    {  
        rear=(rear+1)%max;
        queue[rear]=element;
    }  
}  
  
int dequeue()  
{  
    if((front==-1) && (rear==-1)) 
    {  
        printf("\nUNDERFLOW..");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%max;  
}  
} 
void display()  
{  
    int i;  
    if(front==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else if(rear>=front)
    {  
    	for(i=front;i<=rear;i++)
    		printf("%d\n",queue[i]);
	}
	else
	{
		for(i=front;i<=max-1;i++)
			printf("%d\n",queue[i]);
		for(i=0;i<=rear;i++)
			printf("%d\n",queue[i]);
	}
}  
int main()  
{  
    int choice=1,x;
      
    while(choice<4 && choice!=0)  
    {  
    printf("\n1: Insert an element");  
    printf("\n2: Delete an element");  
    printf("\n3: Display the elements");  
    printf("\nEnter your choice: ");  
    scanf("%d", &choice);  
      
    switch(choice)
    {  
          
        case 1:
        printf("Enter the element which is to be inserted: ");  
        scanf("%d", &x);  
        enqueue(x);  
        break;  
        case 2:  
        dequeue();  
        break;  
        case 3:  
        display();  
  
    }}  
    return 0;  
}  
