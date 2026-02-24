#include<stdio.h>
struct emp {
	int id;
	char name[60];
	int salary;
};
void asc(struct emp[],int);
int main() {
	int i=0,n=0,j=0;
	printf("enter how many employees you wnat to enter");
	scanf("%d",&n);
	struct emp e[n];
	int temp;
	for(i=0; i<n; i++) 
	{
			fflush(stdin);
		printf("\n emp name %d:",i+1);
		gets(e[i].name);
		fflush(stdin);
		printf("\n emp id %d:",i+1);
		scanf("%d",&e[i].id);
		fflush(stdin);
		printf("\n emp salary %d:",i+1);
		scanf("%d",&e[i].salary);
		fflush(stdin);
	}
	asc(e,n);
	return 0;
}
	void asc(struct emp a[],int N)
	{
	    struct emp Temp;
	    int i=0,j=0;
		for(i=0; i<N; i++) 
		{
		for(j=i+1; j<N; j++) 
		{
			if(a[i].salary>a[j].salary)
			{
				Temp=a[i];
				a[i]=a[j];
				a[j]=Temp;
			}
		}
    }
	printf("\n in ascending order:");
	for(i=0; i<N; i++) 
	{
		printf("\n emp name %d:%s",i+1,a[i].name);
		printf("\n emp id %d:%d",i+1,a[i].id);
		printf("\n emp salary %d:%d",i+1,a[i].salary);
	}
}


