#include<stdio.h>
#include<conio.h>
struct xyz
{
	char name[20];
	int age;
	int phone;
	int salary;
};
void main()
{
//declaration of original member as an array
struct xyz employee[20];
int i,n;
printf("\nEnter the number of employeed in your organisation(<=20) : ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("nEnter Person %d\t Name :",(i+1));
	scanf("%s",&employee[i].name);
	printf("\nEnter Person %d\t Age :",i+1);
	scanf("%d",&employee[i].age);
	printf("\nEnter Person %d\t Phone No. :",i+1);
	scanf("%i",&employee[i].phone);
	printf("\nEnter Person %d\t Salary :",i+1);
	scanf("%i",&employee[i].salary);
}
printf("\n\nSr. Name\tAge\tPhoneNo.  \tSalary\t\n");
for(i=0;i<n;i++)
{
	printf("%d %s\t%i\t%i\t%i\n",i+1,employee[i].name,employee[i].age,employee[i].phone,employee[i].salary);
}
getch();
}
