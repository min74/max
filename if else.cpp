#include<stdio.h>
int main ()
{
	float x,y;
	 scanf("%f,%f",&x,&y);
	 if (x>0&&y>0)  printf("点(%f,%f)在第一象限。 \n",x,y);
	 else if (x<0&&y>0)  printf("点(%f,%f)在第二象限。  \n",x,y);
	 else if (x<0&&y<0)  printf("点（%f,%f)在第三象限。  \n",x,y);
	 else if (x>0&&y<0)  printf("点(%f,%f)在第四象限。  \n",x,y);
	return 0;
}
