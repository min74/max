#include<stdio.h>
int main ()
{
	float x,y;
	 scanf("%f,%f",&x,&y);
	 if (x>0&&y>0)  printf("��(%f,%f)�ڵ�һ���ޡ� \n",x,y);
	 else if (x<0&&y>0)  printf("��(%f,%f)�ڵڶ����ޡ�  \n",x,y);
	 else if (x<0&&y<0)  printf("�㣨%f,%f)�ڵ������ޡ�  \n",x,y);
	 else if (x>0&&y<0)  printf("��(%f,%f)�ڵ������ޡ�  \n",x,y);
	return 0;
}
