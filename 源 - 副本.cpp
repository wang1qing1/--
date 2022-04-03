#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char name[9] = "0";
	int china = 0;
	int math = 0;
	int english = 0;
	int num = 0;
}stu;
void add(stu* plist, int n)
{
	while (n--)
	{
		scanf("%s", plist->name);
		scanf("%d", &(plist->china));
		scanf("%d", &(plist->math));
		scanf("%d", &(plist->english));
		plist->num = plist->china + plist->english + plist->math;
		plist++;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	stu* ppstu = (stu*)malloc(sizeof(stu) * n);
	add(ppstu, n);
	/*printf("%s ", ppstu[2].name);
	printf("%d ", ppstu[2].china);
	printf("%d ", ppstu[2].math);
	printf("%d ", ppstu[2].english);
	printf("%d ", ppstu[2].num);*/
	for(int i=0;i<n-1;i++)
	{
		if ((ppstu[0].num) >= (ppstu[i+1].num))
		{
			;
		}
		else
		{
			ppstu[0] = ppstu[i + 1];  
		}
	}
	printf("%s ", ppstu[0].name);
	printf("%d ", ppstu[0].china);
	printf("%d ", ppstu[0].math);
	printf("%d ", ppstu[0].english);
	return 0;
}