#include<stdio.h>

void new_func1(void);

void func1(int a)
{
    for(int i = 0; i < 100000000; i++)
	{
		sleep(1);
			if(i>a)
				return;
		
	}

    return;
}

void func2()
{
    for(int i = 0; i < 10; i++)
	{
		sleep(10000000);
	}
    return ;
}
void func3(int b)
{
    for(int i = 10; i > 3; i++)
	{
		sleep(1);
			if(i<b)
				return;
	}
    return ;
}

int main(void)
{
    printf("\n Inside main()\n");
	string typeOfShape;
	scanf("%s", typeOfShape);
	
    int i = 0;

    for(;i<10;i++);
	{
		for(int j=1000000; j > 0; j--)
		{
			if(func1(i) || func2() || func3(j){
				printf("\n Inside if()\n");
			}
		}
	}

    return 0;
}