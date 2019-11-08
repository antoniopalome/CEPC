#include<stdio.h>
int main(){
	int a,b,c,d=0,x,e=0;
	scanf("%d",&a);
	if(a>=0 && a<=10000){
	for(x=1;x<=a;x=x+1)
	{
		 scanf("%d %d",&b,&c);
		 d=b*c;
		 e=e+d;
	}
		 printf("%d\n",e);
	}
	return 0;
}