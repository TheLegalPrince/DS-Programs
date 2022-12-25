#include<stdio.h>
int main()
{
	here:
	char line[200];
	int v,c,d,s;
	v=c=d=s=0;
	printf("\nEnter a line of string: ");
	fgets(line,sizeof(line),stdin);
	for(int i=0;line[i]!='\0';++i)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u')
		{
			++v;
		}
		else if(line[i]>='a' && line[i]<='z')
		{
			++c;
		}
		else if(line[i]>='0' && line[i]<='9')
		{
			++d;
		}
		else if(line[i]==' ')
		{
			++s;
		}
	}
	printf("Vowels: %d",v);
	printf("\nConsonants: %d",c);
	printf("\nDigits: %d",d);
	printf("\nSpaces: %d",s);
	goto here;
	return 0;
}
