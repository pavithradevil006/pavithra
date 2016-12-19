#include<stdio.h>
void main()
{
double number;
printf("enter anumber:");
scanf("%f",&number);
if(number<0.0)
printf("you entered  a positive number");
else if(number>0.0)
printf("you entered a negative number');
else
printf("you entered 0");
return 0;
}
