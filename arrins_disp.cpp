# include <stdio.h>
int  main( )
{
int  a[100], i, n, ele, pos ;
printf("Enter the Numbers of elements: ") ;
scanf("%d ",& n);
printf("\n Enter the elements of array : \n") ;
for (i=1 ; i <= n ; i++)
scanf("%d ",& a[i]) ;
printf("\n Array entered by user is :\n") ;
for (  i = 1 ; i <= n ; i++)
printf("%d \t",a[i]) ;

printf("\n Enter the position you want to enter :") ;
scanf("%d ",& pos) ;
printf("\n Enter the element you want to enter :") ;
scanf("%d ",& ele) ;

for (  i = 1 ; i <= n ; i++)
{
if ( i > pos )
a[i] = a[i-1] ;
else
{
if ( i == pos )
a[i] = ele ;
else
a[i] = a[i] ;
}
}
printf("\n Array After Inserting element :\n") ;
for (  i = 1 ; i <= n ; i++)
scanf("%d \t",a[i]) ;
return 0;
}
