#include<stdio.h>
struct employee{
  char name[10];
  int age;
  int phno;
  float sal;
};
int main()
{
  int n=20;
  struct employee e[n];
  for(int i=1;i<=20;i++)
  {
     printf("enter name :");
     scanf("%s",e[i].name);
     printf("\nenter age :");
     scanf("%d",&e[i].age);
     printf("\nenter phone number:");
     scanf("%d",&e[i].phno);
     print("\nenter salary:");
     scanf("%f",&e[i].sal);
   }
   printf("details of employees");
   printf("\nName        Age          PhoneNumber    Salary");
   for(int i=1;i<=20;i++)
   {
   printf(\ne[i].name   e[i].age    e[i].phno      e[i].sal);
   }
   return 0;
   }
          
