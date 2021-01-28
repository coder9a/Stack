#include<stdio.h>
int TOH(int n,char left, char mid, char right)
{
	if(n==1)
	{
		printf("Move disk 1 from %c to %c", left, right);
	}
	else
	{
		TOH(n-1, left, right, mid);
		printf("\nMove disk %d from %c to %c\n", n, left, right);
		TOH(n-1, mid, left, right);
	}
}
int main()
{
	int n;
	printf("Enter number of disks\t");
	scanf("%d",&n);
	TOH(n,'A','B','C');
	return 0;
}
