#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<stdlib.h>
	struct student
	{
		int rollno;
		char name[100];
		char course[100];
	};
	int main()
	{
		int i;
		struct student st[3];
		printf("Enter records of three students");
		for(i=1;i<=3;i++)
		{
			printf("\nEnter %d Roll no: ",i);
			scanf("%d",&st[i].rollno);
			printf("Enter %d name: ",i);
			scanf("%s",&st[i].name);
			printf("Enter course: ");
			scanf("%s",&st[i].course);
			fflush(stdin);
		}
		printf("\n *******Student Information list******* ");
		for(i=1;i<=3;i++)
		{
			printf("\nRoll No.: %d	, Name: %s	,Course: %s",st[i].rollno,st[i].name,st[i].course);
		}
		return 0;
	}
