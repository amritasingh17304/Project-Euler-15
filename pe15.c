#include<stdio.h>
int rec(int x,int y)
{
	float g;
	if(x==2 && y==2)
			return 2;
	if(x==2 && y==3)
			return 3;
	else 
		g=(x+y-1)/(x-1)*(y-1)*rec(x-1,y-1);
		return g;
}
int main()
{
	int x,y;
	double g;
	scanf("%d %d",&x,&y);
	g=rec(x,y);
	printf("%f",g);
	return 0;
}                                                  
